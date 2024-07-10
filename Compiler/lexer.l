%{
    #include "y.tab.h"
    int countn=0;

    #define YY_USER_ACTION \
    yylloc.first_line = yylloc.last_line; \
    yylloc.first_column = yylloc.last_column; \
    for(int i = 0; yytext[i] != '\0'; i++) { \
        if(yytext[i] == '\n') { \
            yylloc.last_line++; \
            yylloc.last_column = 0; \
        } \
        else { \
            yylloc.last_column++; \
        } \
    }
%}
%option yylineno

alpha [a-zA-Z]
digit [0-9]

%%

"HighwayToHell"             { strcpy(yylval.nd_obj.name,(yytext)); return START; }
"HellsBells"                { strcpy(yylval.nd_obj.name,(yytext)); return END; }

"Shout"                     { strcpy(yylval.nd_obj.name,(yytext)); return ECHOF; }
"Voices"                    { strcpy(yylval.nd_obj.name,(yytext)); return PRINTRF; }

"CarryOnMyWaywardSon"       { strcpy(yylval.nd_obj.name,(yytext)); return FOR; }
"DontStopMeNow"             { strcpy(yylval.nd_obj.name,(yytext)); return WHILE; }

"ShouldIStay"               { strcpy(yylval.nd_obj.name,(yytext)); return IF; }
"ShouldIGo"                 { strcpy(yylval.nd_obj.name,(yytext)); return ELSE; }

"BreakingTheHabit"          { strcpy(yylval.nd_obj.name,(yytext)); return BREAK; }
"BackInBlack"               { strcpy(yylval.nd_obj.name,(yytext)); return RETURN; }

"ItsASmallWorld"            { strcpy(yylval.nd_obj.name,(yytext)); return LE; }
"BigWorld"                  { strcpy(yylval.nd_obj.name,(yytext)); return GE; }
"MyWorld"                   { strcpy(yylval.nd_obj.name,(yytext)); return EQ; }
"DifferentWorld"            { strcpy(yylval.nd_obj.name,(yytext)); return NE; }
"HigherGround"              { strcpy(yylval.nd_obj.name,(yytext)); return GT; }
"UnderPressure"             { strcpy(yylval.nd_obj.name,(yytext)); return LT; }

"RockAndRoll"               { strcpy(yylval.nd_obj.name,(yytext)); return AND; }
"WithOrWithoutYou"          { strcpy(yylval.nd_obj.name,(yytext)); return OR; }

"AddictedToLove"            { strcpy(yylval.nd_obj.name,(yytext)); return ADD; }
"LoveHurts"                 { strcpy(yylval.nd_obj.name,(yytext)); return SUBTRACT; }
"LoveWillTearUsApart"       { strcpy(yylval.nd_obj.name,(yytext)); return DIVIDE; }
"WholeLottaLove"            { strcpy(yylval.nd_obj.name,(yytext)); return MULTIPLY; }

"AllOfMe"                   { strcpy(yylval.nd_obj.name,(yytext)); return INT; }
"FloatOn"                   { strcpy(yylval.nd_obj.name,(yytext)); return FLOAT; }
"Heartstrings"              { strcpy(yylval.nd_obj.name,(yytext)); return STRING; }
"DefinitelyMaybe"           { strcpy(yylval.nd_obj.name,(yytext)); return BOOL; }

"Yes"                       { strcpy(yylval.nd_obj.name,(yytext)); return TRUE; }
"No"                        { strcpy(yylval.nd_obj.name,(yytext)); return FALSE; }

"Receive"                   { strcpy(yylval.nd_obj.name,(yytext)); return ASSIGN; }
\${alpha}({alpha}|{digit})* { strcpy(yylval.nd_obj.name,(yytext)); return ID; }

"BlackMagic"                { strcpy(yylval.nd_obj.name,(yytext)); return FUNC_DEF; }
{alpha}({alpha}|{digit})*   { strcpy(yylval.nd_obj.name,(yytext)); return FUNC_NAME; }

[-]?{digit}+                { strcpy(yylval.nd_obj.name,(yytext)); return NUMBER; }
[-]?{digit}+\.{digit}{1,6}  { strcpy(yylval.nd_obj.name,(yytext)); return FLOAT_NUM; }
["'].*["']                  { strcpy(yylval.nd_obj.name,(yytext)); return STR; }


\/\/.*                      { ; }
\/\*(.*\n)*.*\*\/           { ; }
[ \t]*                      { return SPACE; }
[\r\n]*                     { countn++; return NEW_LINE; }
.                           { return *yytext; }

%%  

int yywrap() {
    return 1;
}