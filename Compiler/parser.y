%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yyparse();
extern FILE *yyin;

void yyerror(const char *s);

typedef struct Node {
    char *token;
    struct Node *left;
    struct Node *right;
} Node;

Node* create_node(char *token, Node *left, Node *right);
void print_tree(Node *tree, int level);

%}

%union {
    int ival;
    char *sval;
    Node *nval;
}

%token <sval> T_HIGHWAY_TO_HELL T_HELL_BELLS T_FUNCTION T_INT T_RETURN
%token <sval> T_ADD T_SUB T_MUL T_DIV T_ASSIGN T_ECHO T_PRINT_R
%token <ival> T_NUMBER
%token <sval> T_IDENTIFIER

%type <nval> program statement function_declaration variable_declaration expression term

%%

program:
    T_HIGHWAY_TO_HELL statement_list T_HELL_BELLS { print_tree($2, 0); }
;

statement_list:
    statement_list statement { $$ = create_node("stmt_list", $1, $2); }
    | /* empty */ { $$ = NULL; }
;

statement:
    function_declaration
    | variable_declaration
    | expression ';'
    | T_ECHO expression ';' { $$ = create_node("echo", $2, NULL); }
    | T_PRINT_R '(' expression ')' ';' { $$ = create_node("print_r", $3, NULL); }
;

function_declaration:
    T_FUNCTION T_IDENTIFIER '(' parameter_list ')' '{' statement_list '}' { $$ = create_node("function", $2, $6); }
;

parameter_list:
    parameter_list ',' parameter { $$ = create_node("param_list", $1, $3); }
    | parameter { $$ = $1; }
    | /* empty */ { $$ = NULL; }
;

parameter:
    T_INT T_IDENTIFIER { $$ = create_node($2, NULL, NULL); }
;

variable_declaration:
    T_INT T_IDENTIFIER T_ASSIGN T_NUMBER ';' { $$ = create_node("assign", create_node($2, NULL, NULL), create_node("number", NULL, NULL)); }
;

expression:
    term { $$ = $1; }
    | expression T_ADD term { $$ = create_node("add", $1, $3); }
    | expression T_SUB term { $$ = create_node("sub", $1, $3); }
    | expression T_MUL term { $$ = create_node("mul", $1, $3); }
    | expression T_DIV term { $$ = create_node("div", $1, $3); }
;

term:
    T_IDENTIFIER { $$ = create_node($1, NULL, NULL); }
    | T_NUMBER { $$ = create_node("number", NULL, NULL); }
;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

Node* create_node(char *token, Node *left, Node *right) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->token = strdup(token);
    new_node->left = left;
    new_node->right = right;
    return new_node;
}

void print_tree(Node *tree, int level) {
    if (tree == NULL) return;
    for (int i = 0; i < level; i++) printf("  ");
    printf("%s\n", tree->token);
    print_tree(tree->left, level + 1);
    print_tree(tree->right, level + 1);
}

int main(int argc, char **argv) {
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        if (!file) {
            fprintf(stderr, "Error: could not open file %s\n", argv[1]);
            return 1;
        }
        yyin = file;
    }
    yyparse();
    return 0;
}