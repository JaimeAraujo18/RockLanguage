/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    START = 258,                   /* START  */
    END = 259,                     /* END  */
    FUNC_DEF = 260,                /* FUNC_DEF  */
    FUNC_NAME = 261,               /* FUNC_NAME  */
    ECHOF = 262,                   /* ECHOF  */
    PRINTRF = 263,                 /* PRINTRF  */
    RETURN = 264,                  /* RETURN  */
    FOR = 265,                     /* FOR  */
    WHILE = 266,                   /* WHILE  */
    IF = 267,                      /* IF  */
    ELSE = 268,                    /* ELSE  */
    TRUE = 269,                    /* TRUE  */
    FALSE = 270,                   /* FALSE  */
    NUMBER = 271,                  /* NUMBER  */
    FLOAT_NUM = 272,               /* FLOAT_NUM  */
    ID = 273,                      /* ID  */
    ASSIGN = 274,                  /* ASSIGN  */
    LE = 275,                      /* LE  */
    GE = 276,                      /* GE  */
    EQ = 277,                      /* EQ  */
    NE = 278,                      /* NE  */
    GT = 279,                      /* GT  */
    LT = 280,                      /* LT  */
    AND = 281,                     /* AND  */
    OR = 282,                      /* OR  */
    ADD = 283,                     /* ADD  */
    SUBTRACT = 284,                /* SUBTRACT  */
    DIVIDE = 285,                  /* DIVIDE  */
    MULTIPLY = 286,                /* MULTIPLY  */
    BREAK = 287,                   /* BREAK  */
    STR = 288,                     /* STR  */
    INT = 289,                     /* INT  */
    FLOAT = 290,                   /* FLOAT  */
    STRING = 291,                  /* STRING  */
    BOOL = 292,                    /* BOOL  */
    NEW_LINE = 293,                /* NEW_LINE  */
    SPACE = 294                    /* SPACE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 39 "parser.y"
 
	struct var_name { 
		char name[100]; 
		struct node* nd;
	} nd_obj; 

#line 110 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
