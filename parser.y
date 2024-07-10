%{
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <ctype.h>
    #include "lex.yy.c"

    void yyerror(const char *s);
    int yylex();
    int yywrap();
    void add(char);
    int search(char *);
    void insert_type();
    void printtree(struct node*);
    void printInorder(struct node *);
    struct node* mknode(struct node *left, struct node *right, char *token);

    struct dataType {
        char * id_name;
        char * data_type;
        char * type;
        int line_no;
    } symbolTable[100];

    int count=0;
    int q;
    char type[10];
    extern int countn;
    struct node *head;
    struct node { 
        struct node *left; 
        struct node *right; 
        char *token; 
    };
%}

%locations

%union { 
	struct var_name { 
		char name[100]; 
		struct node* nd;
	} nd_obj; 
} 

%token <nd_obj> START END FUNC_DEF FUNC_NAME ECHOF PRINTRF RETURN FOR WHILE IF ELSE TRUE FALSE NUMBER FLOAT_NUM ID ASSIGN LE GE EQ NE GT LT AND OR ADD SUBTRACT DIVIDE MULTIPLY BREAK STR INT FLOAT STRING BOOL NEW_LINE SPACE
%type <nd_obj> program start program_body body end return datatype expression statement init value relational_operator condition else multi_value function function_call return_type_opt return_type param_list_opt param_list param expression_statement declaration assignment

%left ADD SUBTRACT
%left MULTIPLY DIVIDE

%left AND
%left OR

%%

// $$      1    2       
program: start program_body { $$.nd = mknode($1.nd, $2.nd, "program"); head = $$.nd; }
;

start: START { add('K'); } { $$.nd = mknode(NULL, NULL, $1.name); }
;

program_body: body end { printf("teste"); $$.nd = mknode($1.nd, $2.nd, "program_body"); }
;

// INT FLOAT STRING BOOL
datatype: INT { insert_type(); }
| FLOAT { insert_type(); }
| STRING { insert_type(); }
| BOOL { insert_type(); }
;

body: SPACE { $$.nd = mknode(NULL, NULL, "Space"); }
| statement ';' { printf("checou no statement"); $$.nd = $1.nd; }
| FOR { add('K'); } '(' statement ';' condition ';' statement ')' '{' body '}' { struct node *temp = mknode($6.nd, $8.nd, "CONDITION"); struct node *temp2 = mknode($4.nd, temp, "CONDITION"); $$.nd = mknode(temp2, $11.nd, $1.name); }
| WHILE { add('K'); } '(' condition ')' '{' body '}' { $$.nd = mknode($4.nd, $7.nd, "while"); }
| IF { add('K'); } '(' condition ')' '{' body '}' else { struct node *iff = mknode($4.nd, $7.nd, $1.name); 	$$.nd = mknode(iff, $9.nd, "if-else"); }
| function { $$.nd = $1.nd; }
| PRINTRF { add('K'); } value ';' { $$.nd = mknode(NULL, NULL, "printrf"); }
| ECHOF { add('K'); } multi_value ';' { $$.nd = mknode(NULL, NULL, "echof"); }
| NEW_LINE { $$.nd = mknode(NULL, NULL, "NL"); }
| body body { $$.nd = $1.nd; }
;

// body_list: body_list body { $$.nd = mknode($1.nd, $2.nd, "body_list"); }
// | body { $$.nd = $1.nd; }
// ;

else: ELSE { add('K'); } '{' body '}' { $$.nd = mknode(NULL, $4.nd, $1.name); }
| { $$.nd = NULL; }
;

condition: value relational_operator value { $$.nd = mknode($1.nd, $3.nd, $2.name); }
| condition AND condition { $$.nd = mknode($1.nd, $3.nd, $2.name); }
| condition OR condition { $$.nd = mknode($1.nd, $3.nd, $2.name); }
| TRUE { add('K'); $$.nd = NULL; }
| FALSE { add('K'); $$.nd = NULL; }
| { $$.nd = NULL; }
;

statement: declaration { $$.nd = mknode(NULL, $1.nd, "declaration"); }
| assignment { $$.nd = mknode(NULL, $1.nd, "assignment"); }
| expression_statement { $$.nd = mknode(NULL, $1.nd, "expression_statement"); }
;

expression_statement: expression { $$.nd = $1.nd; }
;

declaration: datatype ID { add('V'); } init { $2.nd = mknode(NULL, NULL, $2.name); struct node *temp = mknode($1.nd, $2.nd, "DECLARATION"); $$.nd = mknode(temp, $4.nd, "declaration"); }
;

assignment: ID { add('V'); } ASSIGN { add('K'); } expression { $1.nd = mknode(NULL, NULL, $1.name); $3.nd = mknode(NULL, NULL, $3.name); $$.nd = mknode($1.nd, $5.nd, $3.name); }
| ID relational_operator expression { add('V'); $1.nd = mknode(NULL, NULL, $1.name); $$.nd = mknode($1.nd, $3.nd, $2.name); }
;

init: ASSIGN value { $1.nd = mknode(NULL, NULL, $1.name); $$.nd = mknode($1.nd, $2.nd, "init"); }
| { $$.nd = mknode(NULL, NULL, "NULL"); }
;

expression: expression ADD expression { $2.nd = mknode(NULL, NULL, $2.name); $$.nd = mknode($1.nd, $3.nd, $2.name); }
| expression SUBTRACT expression { $$.nd = mknode($1.nd, $3.nd, $2.name); }
| expression MULTIPLY expression { $$.nd = mknode($1.nd, $3.nd, $2.name); }
| expression DIVIDE expression { $$.nd = mknode($1.nd, $3.nd, $2.name); }
| value { $$.nd = $1.nd; }
;

relational_operator: LT
| GT
| LE
| GE
| EQ
| NE
;

value: NUMBER { add('C'); $$.nd = mknode(NULL, NULL, $1.name); }
| FLOAT_NUM { add('C'); $$.nd = mknode(NULL, NULL, $1.name); }
| STR { add('C'); $$.nd = mknode(NULL, NULL, $1.name); }
| ID { $$.nd = mknode(NULL, NULL, $1.name); }
| function_call { $$.nd = $1.nd; }
;

multi_value: value ',' multi_value { $$.nd = mknode($1.nd, $3.nd, "multi_value"); }
| value
;

function_call : FUNC_NAME '(' param_list_opt ')' { $1.nd = mknode(NULL, NULL, "func_name"); $$.nd = mknode($1.nd, $3.nd, "function_call"); }
;

function: FUNC_DEF FUNC_NAME { add('K'); } '(' param_list_opt ')' return_type_opt '{' body return '}' {
    $1.nd = mknode(NULL, NULL, "func_def");
    $2.nd = mknode(NULL, NULL, "func_name");

    struct node *temp = mknode($1.nd, $2.nd, "FUNCTION");

    temp = mknode(temp, $5.nd, "FUNCTION");
    temp = mknode(temp, $7.nd, "FUNCTION");
    temp = mknode(temp, $9.nd, "FUNCTION");

    $$.nd = mknode(temp, $10.nd, "function");
}
;

return: RETURN { add('K'); } value ';' { $1.nd = mknode(NULL, NULL, "return"); $$.nd = mknode($1.nd, $3.nd, "RETURN"); }
;

return_type_opt: return_type { $$.nd = $1.nd; }
| { $$.nd = NULL; }
;

return_type: ':' datatype { $$.nd = $2.nd; }
;

param_list_opt: param_list { $$.nd = $1.nd; }
| { $$.nd = NULL; }
;

param_list: param_list ',' param { $$.nd = mknode($1.nd, $3.nd, "param_list"); }
| param { $$.nd = $1.nd; }
;

param: datatype ID { $2.nd = mknode(NULL, NULL, $2.name); $$.nd = mknode($1.nd, $2.nd, "param"); }
;

end: END { add('K'); $$.nd = mknode(NULL, NULL, $1.name); }
;

%%

int main() {
    yyparse();
    printf("\n\n \t\t\t\t\t\t PHASE 1: LEXICAL ANALYSIS \n\n");
	printf("\nSYMBOL   DATATYPE   TYPE   LINE NUMBER \n");
	printf("_______________________________________\n\n");
	int i=0;


	for(i=0; i<count; i++) {
		printf("%s\t%s\t%s\t%d\t\n", symbolTable[i].id_name, symbolTable[i].data_type, symbolTable[i].type, symbolTable[i].line_no);
	}
	for(i=0;i<count;i++){
		free(symbolTable[i].id_name);
		free(symbolTable[i].type);
	}
	printf("\n\n");
	printf("\t\t\t\t\t\t PHASE 2: SYNTAX ANALYSIS \n\n");
	printtree(head); 
	printf("\n\n");
}

int search(char *type) {
	int i;
	for(i=count-1; i>=0; i--) {
		if(strcmp(symbolTable[i].id_name, type)==0) {
			return -1;
			break;
		}
	}
	return 0;
}

void add(char c) {
    q=search(yytext);
	if(q==0) {
		if(c=='K') {
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no=countn;
			symbolTable[count].type=strdup("Keyword\t");
			count++;
		}
		else if(c=='F') {
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup(type);
			symbolTable[count].line_no=countn;
			symbolTable[count].type=strdup("Function");
			count++;
		}
		else if(c=='V') {
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup(type);
			symbolTable[count].line_no=countn;
			symbolTable[count].type=strdup("Variable");
			count++;
		}
		else if(c=='C') {
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("CONST");
			symbolTable[count].line_no=countn;
			symbolTable[count].type=strdup("Constant");
			count++;
		}
    }
}

struct node* mknode(struct node *left, struct node *right, char *token) {	
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	char *newstr = (char *)malloc(strlen(token)+1);
	strcpy(newstr, token);
	newnode->left = left;
	newnode->right = right;
	newnode->token = newstr;
	return(newnode);
}

void printtree(struct node* tree) {
	printf("\n\n Inorder traversal of the Parse Tree: \n\n");
	printInorder(tree);
	printf("\n\n");
}

void printInorder(struct node *tree) {
	int i;
	if (tree->left) {
		printInorder(tree->left);
	}
	printf("%s, ", tree->token);
	if (tree->right) {
		printInorder(tree->right);
	}
}

void insert_type() {
	strcpy(type, yytext);
}

void yyerror(const char* msg) {
    fprintf(stderr, "'%s' at line: %d:%d\n", msg, yylloc.first_line, yylloc.first_column);
}