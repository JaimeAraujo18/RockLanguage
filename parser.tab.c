/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

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

#line 107 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 203 "parser.tab.c"

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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_START = 3,                      /* START  */
  YYSYMBOL_END = 4,                        /* END  */
  YYSYMBOL_FUNC_DEF = 5,                   /* FUNC_DEF  */
  YYSYMBOL_FUNC_NAME = 6,                  /* FUNC_NAME  */
  YYSYMBOL_ECHOF = 7,                      /* ECHOF  */
  YYSYMBOL_PRINTRF = 8,                    /* PRINTRF  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_FOR = 10,                       /* FOR  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_TRUE = 14,                      /* TRUE  */
  YYSYMBOL_FALSE = 15,                     /* FALSE  */
  YYSYMBOL_NUMBER = 16,                    /* NUMBER  */
  YYSYMBOL_FLOAT_NUM = 17,                 /* FLOAT_NUM  */
  YYSYMBOL_ID = 18,                        /* ID  */
  YYSYMBOL_ASSIGN = 19,                    /* ASSIGN  */
  YYSYMBOL_LE = 20,                        /* LE  */
  YYSYMBOL_GE = 21,                        /* GE  */
  YYSYMBOL_EQ = 22,                        /* EQ  */
  YYSYMBOL_NE = 23,                        /* NE  */
  YYSYMBOL_GT = 24,                        /* GT  */
  YYSYMBOL_LT = 25,                        /* LT  */
  YYSYMBOL_AND = 26,                       /* AND  */
  YYSYMBOL_OR = 27,                        /* OR  */
  YYSYMBOL_ADD = 28,                       /* ADD  */
  YYSYMBOL_SUBTRACT = 29,                  /* SUBTRACT  */
  YYSYMBOL_DIVIDE = 30,                    /* DIVIDE  */
  YYSYMBOL_MULTIPLY = 31,                  /* MULTIPLY  */
  YYSYMBOL_BREAK = 32,                     /* BREAK  */
  YYSYMBOL_STR = 33,                       /* STR  */
  YYSYMBOL_INT = 34,                       /* INT  */
  YYSYMBOL_FLOAT = 35,                     /* FLOAT  */
  YYSYMBOL_STRING = 36,                    /* STRING  */
  YYSYMBOL_BOOL = 37,                      /* BOOL  */
  YYSYMBOL_NEW_LINE = 38,                  /* NEW_LINE  */
  YYSYMBOL_SPACE = 39,                     /* SPACE  */
  YYSYMBOL_40_ = 40,                       /* ';'  */
  YYSYMBOL_41_ = 41,                       /* '('  */
  YYSYMBOL_42_ = 42,                       /* ')'  */
  YYSYMBOL_43_ = 43,                       /* '{'  */
  YYSYMBOL_44_ = 44,                       /* '}'  */
  YYSYMBOL_45_ = 45,                       /* ','  */
  YYSYMBOL_46_ = 46,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_program = 48,                   /* program  */
  YYSYMBOL_start = 49,                     /* start  */
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_program_body = 51,              /* program_body  */
  YYSYMBOL_datatype = 52,                  /* datatype  */
  YYSYMBOL_body = 53,                      /* body  */
  YYSYMBOL_54_2 = 54,                      /* $@2  */
  YYSYMBOL_55_3 = 55,                      /* $@3  */
  YYSYMBOL_56_4 = 56,                      /* $@4  */
  YYSYMBOL_57_5 = 57,                      /* $@5  */
  YYSYMBOL_58_6 = 58,                      /* $@6  */
  YYSYMBOL_else = 59,                      /* else  */
  YYSYMBOL_60_7 = 60,                      /* $@7  */
  YYSYMBOL_condition = 61,                 /* condition  */
  YYSYMBOL_statement = 62,                 /* statement  */
  YYSYMBOL_expression_statement = 63,      /* expression_statement  */
  YYSYMBOL_declaration = 64,               /* declaration  */
  YYSYMBOL_65_8 = 65,                      /* $@8  */
  YYSYMBOL_assignment = 66,                /* assignment  */
  YYSYMBOL_67_9 = 67,                      /* $@9  */
  YYSYMBOL_68_10 = 68,                     /* $@10  */
  YYSYMBOL_init = 69,                      /* init  */
  YYSYMBOL_expression = 70,                /* expression  */
  YYSYMBOL_relational_operator = 71,       /* relational_operator  */
  YYSYMBOL_value = 72,                     /* value  */
  YYSYMBOL_multi_value = 73,               /* multi_value  */
  YYSYMBOL_function_call = 74,             /* function_call  */
  YYSYMBOL_function = 75,                  /* function  */
  YYSYMBOL_76_11 = 76,                     /* $@11  */
  YYSYMBOL_return = 77,                    /* return  */
  YYSYMBOL_78_12 = 78,                     /* $@12  */
  YYSYMBOL_return_type_opt = 79,           /* return_type_opt  */
  YYSYMBOL_return_type = 80,               /* return_type  */
  YYSYMBOL_param_list_opt = 81,            /* param_list_opt  */
  YYSYMBOL_param_list = 82,                /* param_list  */
  YYSYMBOL_param = 83,                     /* param  */
  YYSYMBOL_end = 84                        /* end  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   284

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  139

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    42,     2,     2,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    40,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    58,    58,    61,    61,    64,    68,    69,    70,    71,
      74,    75,    76,    76,    77,    77,    78,    78,    79,    80,
      80,    81,    81,    82,    83,    90,    90,    91,    94,    95,
      96,    97,    98,    99,   102,   103,   104,   107,   110,   110,
     113,   113,   113,   114,   117,   118,   121,   122,   123,   124,
     125,   128,   129,   130,   131,   132,   133,   136,   137,   138,
     139,   140,   143,   144,   147,   150,   150,   164,   164,   167,
     168,   171,   174,   175,   178,   179,   182,   185
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "START", "END",
  "FUNC_DEF", "FUNC_NAME", "ECHOF", "PRINTRF", "RETURN", "FOR", "WHILE",
  "IF", "ELSE", "TRUE", "FALSE", "NUMBER", "FLOAT_NUM", "ID", "ASSIGN",
  "LE", "GE", "EQ", "NE", "GT", "LT", "AND", "OR", "ADD", "SUBTRACT",
  "DIVIDE", "MULTIPLY", "BREAK", "STR", "INT", "FLOAT", "STRING", "BOOL",
  "NEW_LINE", "SPACE", "';'", "'('", "')'", "'{'", "'}'", "','", "':'",
  "$accept", "program", "start", "$@1", "program_body", "datatype", "body",
  "$@2", "$@3", "$@4", "$@5", "$@6", "else", "$@7", "condition",
  "statement", "expression_statement", "declaration", "$@8", "assignment",
  "$@9", "$@10", "init", "expression", "relational_operator", "value",
  "multi_value", "function_call", "function", "$@11", "return", "$@12",
  "return_type_opt", "return_type", "param_list_opt", "param_list",
  "param", "end", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-64)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-41)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,   -64,    21,   245,   -64,   -64,    26,    -1,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   217,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,    23,   196,     9,   -64,   -64,   -64,
      -2,   -64,   -64,   -64,   -64,    18,   103,   103,    16,    17,
      19,   -64,   -64,   -64,   -64,   -64,   -64,    31,   103,   -64,
     -64,   245,   -64,   -64,   103,   103,   103,   103,    25,    41,
      22,    33,   -64,   -64,    38,    27,    44,     2,    71,    71,
     -64,    -2,    49,    -7,    -7,   -64,   -64,    18,   -64,   -64,
      18,   103,   -64,   -64,    50,   -64,   -64,   -20,   244,   -17,
     103,   103,   -64,    51,   -64,   -64,    71,    71,    71,    30,
     103,    48,    -2,   -64,    46,   -10,    67,   -64,   245,   -64,
     245,    18,    53,   -64,     2,    64,   106,   -64,   245,    68,
     -64,    93,   210,    83,   -64,   -64,   -64,    84,   245,    86,
     103,   -64,   141,   245,    87,   -64,   155,   -64,   -64
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     3,     0,     0,     4,     1,     0,     0,    21,    19,
      12,    14,    16,    57,    58,    60,    59,     6,     7,     8,
       9,    23,    10,     2,     0,     0,     0,    36,    34,    35,
      37,    50,    61,    18,    65,    73,     0,     0,     0,     0,
       0,    53,    54,    55,    56,    52,    51,     0,     0,    38,
      77,    24,     5,    11,     0,     0,     0,     0,     0,     0,
       0,    72,    75,    60,    63,     0,     0,     0,    33,    33,
      41,    43,    45,    46,    47,    49,    48,    73,    76,    64,
       0,     0,    22,    20,     0,    31,    32,     0,     0,     0,
       0,     0,    39,     0,    74,    62,    33,    33,    33,     0,
       0,     0,    42,    44,    70,     0,    29,    30,     0,    28,
       0,     0,     0,    69,     0,     0,     0,    71,     0,     0,
      15,    27,     0,     0,    25,    17,    67,     0,     0,     0,
       0,    66,     0,     0,     0,    13,     0,    68,    26
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -64,   -64,   -64,   -64,   -64,   -32,    -3,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -54,   -63,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -43,    43,   -35,    52,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,    55,   -64,    54,   -64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    23,    24,    51,    38,    39,    40,
      37,    36,   125,   129,    87,    26,    27,    28,    72,    29,
      47,    90,    92,    30,    48,    31,    65,    32,    33,    58,
     127,   130,   112,   113,    60,    61,    62,    52
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,    64,    66,    59,    84,    71,    97,    98,     7,    97,
      98,    73,    74,    75,    76,    89,    97,    98,    13,    14,
      15,     5,    99,    56,    57,   101,    54,    55,    56,    57,
     114,     1,    34,    88,    88,    16,    17,    18,    19,    20,
      35,    49,   105,   106,   107,    59,    64,   102,    59,    53,
      70,   119,    17,    18,    19,    20,   103,    67,    68,    78,
      69,    88,    88,    88,    79,   109,    77,    82,    91,     6,
       7,     8,     9,   108,    10,    11,    12,     7,    80,   117,
      13,    14,    15,    81,    83,    85,    86,    13,    14,    63,
      96,   110,   111,   104,    98,   134,   118,    16,    17,    18,
      19,    20,    21,    22,    16,   115,   124,   116,   120,     7,
     123,     6,     7,     8,     9,   122,    10,    11,    12,    13,
      14,    63,    13,    14,    15,   132,   128,   137,   131,   133,
     136,   100,    93,    95,    94,     0,    16,     0,     0,    16,
      17,    18,    19,    20,    21,    22,     6,     7,     8,     9,
     121,    10,    11,    12,     0,     0,     0,    13,    14,    15,
       6,     7,     8,     9,     0,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     0,     0,     0,     0,   135,     0,     0,    16,    17,
      18,    19,    20,    21,    22,     0,     0,     0,     0,   138,
      50,     6,     7,     8,     9,     0,    10,    11,    12,     0,
       0,     0,    13,    14,    15,     6,     7,     8,     9,   126,
      10,    11,    12,     0,     0,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,   -40,    41,    42,    43,
      44,    45,    46,    16,    17,    18,    19,    20,    21,    22,
       6,     7,     8,     9,     0,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    41,    42,    43,    44,    45,    46,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
      18,    19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
       3,    36,    37,    35,    67,    48,    26,    27,     6,    26,
      27,    54,    55,    56,    57,    69,    26,    27,    16,    17,
      18,     0,    42,    30,    31,    42,    28,    29,    30,    31,
      40,     3,     6,    68,    69,    33,    34,    35,    36,    37,
      41,    18,    96,    97,    98,    77,    81,    90,    80,    40,
      19,   114,    34,    35,    36,    37,    91,    41,    41,    18,
      41,    96,    97,    98,    42,   100,    41,    40,    19,     5,
       6,     7,     8,    43,    10,    11,    12,     6,    45,   111,
      16,    17,    18,    45,    40,    14,    15,    16,    17,    18,
      40,    43,    46,    42,    27,   130,    43,    33,    34,    35,
      36,    37,    38,    39,    33,   108,    13,   110,    44,     6,
      42,     5,     6,     7,     8,   118,    10,    11,    12,    16,
      17,    18,    16,    17,    18,   128,    43,    40,    44,    43,
     133,    88,    77,    81,    80,    -1,    33,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,     5,     6,     7,     8,
      44,    10,    11,    12,    -1,    -1,    -1,    16,    17,    18,
       5,     6,     7,     8,    -1,    10,    11,    12,    -1,    -1,
      -1,    16,    17,    18,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    44,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    44,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    -1,
      -1,    -1,    16,    17,    18,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    16,    17,    18,    33,
      34,    35,    36,    37,    38,    39,    19,    20,    21,    22,
      23,    24,    25,    33,    34,    35,    36,    37,    38,    39,
       5,     6,     7,     8,    -1,    10,    11,    12,    -1,    -1,
      -1,    16,    17,    18,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    48,    49,    50,     0,     5,     6,     7,     8,
      10,    11,    12,    16,    17,    18,    33,    34,    35,    36,
      37,    38,    39,    51,    52,    53,    62,    63,    64,    66,
      70,    72,    74,    75,     6,    41,    58,    57,    54,    55,
      56,    20,    21,    22,    23,    24,    25,    67,    71,    18,
       4,    53,    84,    40,    28,    29,    30,    31,    76,    52,
      81,    82,    83,    18,    72,    73,    72,    41,    41,    41,
      19,    70,    65,    70,    70,    70,    70,    41,    18,    42,
      45,    45,    40,    40,    62,    14,    15,    61,    72,    61,
      68,    19,    69,    81,    83,    73,    40,    26,    27,    42,
      71,    42,    70,    72,    42,    61,    61,    61,    43,    72,
      43,    46,    79,    80,    40,    53,    53,    52,    43,    62,
      44,    44,    53,    42,    13,    59,     9,    77,    43,    60,
      78,    44,    53,    43,    72,    44,    53,    40,    44
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    50,    49,    51,    52,    52,    52,    52,
      53,    53,    54,    53,    55,    53,    56,    53,    53,    57,
      53,    58,    53,    53,    53,    60,    59,    59,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    63,    65,    64,
      67,    68,    66,    66,    69,    69,    70,    70,    70,    70,
      70,    71,    71,    71,    71,    71,    71,    72,    72,    72,
      72,    72,    73,    73,    74,    76,    75,    78,    77,    79,
      79,    80,    81,    81,    82,    82,    83,    84
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     2,     2,     1,     1,     1,     1,
       1,     2,     0,    12,     0,     8,     0,     9,     1,     0,
       4,     0,     4,     1,     2,     0,     5,     0,     3,     3,
       3,     1,     1,     0,     1,     1,     1,     1,     0,     4,
       0,     0,     5,     3,     2,     0,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     4,     0,    11,     0,     4,     1,
       0,     2,     1,     0,     3,     1,     2,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: start program_body  */
#line 58 "parser.y"
                            { (yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, "program"); head = (yyval.nd_obj).nd; }
#line 1519 "parser.tab.c"
    break;

  case 3: /* $@1: %empty  */
#line 61 "parser.y"
             { add('K'); }
#line 1525 "parser.tab.c"
    break;

  case 4: /* start: START $@1  */
#line 61 "parser.y"
                           { (yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[-1].nd_obj).name); }
#line 1531 "parser.tab.c"
    break;

  case 5: /* program_body: body end  */
#line 64 "parser.y"
                       { printf("teste"); (yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, "program_body"); }
#line 1537 "parser.tab.c"
    break;

  case 6: /* datatype: INT  */
#line 68 "parser.y"
              { insert_type(); }
#line 1543 "parser.tab.c"
    break;

  case 7: /* datatype: FLOAT  */
#line 69 "parser.y"
        { insert_type(); }
#line 1549 "parser.tab.c"
    break;

  case 8: /* datatype: STRING  */
#line 70 "parser.y"
         { insert_type(); }
#line 1555 "parser.tab.c"
    break;

  case 9: /* datatype: BOOL  */
#line 71 "parser.y"
       { insert_type(); }
#line 1561 "parser.tab.c"
    break;

  case 10: /* body: SPACE  */
#line 74 "parser.y"
            { (yyval.nd_obj).nd = mknode(NULL, NULL, "Space"); }
#line 1567 "parser.tab.c"
    break;

  case 11: /* body: statement ';'  */
#line 75 "parser.y"
                { printf("checou no statement"); (yyval.nd_obj).nd = (yyvsp[-1].nd_obj).nd; }
#line 1573 "parser.tab.c"
    break;

  case 12: /* $@2: %empty  */
#line 76 "parser.y"
      { add('K'); }
#line 1579 "parser.tab.c"
    break;

  case 13: /* body: FOR $@2 '(' statement ';' condition ';' statement ')' '{' body '}'  */
#line 76 "parser.y"
                                                                               { struct node *temp = mknode((yyvsp[-6].nd_obj).nd, (yyvsp[-4].nd_obj).nd, "CONDITION"); struct node *temp2 = mknode((yyvsp[-8].nd_obj).nd, temp, "CONDITION"); (yyval.nd_obj).nd = mknode(temp2, (yyvsp[-1].nd_obj).nd, (yyvsp[-11].nd_obj).name); }
#line 1585 "parser.tab.c"
    break;

  case 14: /* $@3: %empty  */
#line 77 "parser.y"
        { add('K'); }
#line 1591 "parser.tab.c"
    break;

  case 15: /* body: WHILE $@3 '(' condition ')' '{' body '}'  */
#line 77 "parser.y"
                                                     { (yyval.nd_obj).nd = mknode((yyvsp[-4].nd_obj).nd, (yyvsp[-1].nd_obj).nd, "while"); }
#line 1597 "parser.tab.c"
    break;

  case 16: /* $@4: %empty  */
#line 78 "parser.y"
     { add('K'); }
#line 1603 "parser.tab.c"
    break;

  case 17: /* body: IF $@4 '(' condition ')' '{' body '}' else  */
#line 78 "parser.y"
                                                       { struct node *iff = mknode((yyvsp[-5].nd_obj).nd, (yyvsp[-2].nd_obj).nd, (yyvsp[-8].nd_obj).name); 	(yyval.nd_obj).nd = mknode(iff, (yyvsp[0].nd_obj).nd, "if-else"); }
#line 1609 "parser.tab.c"
    break;

  case 18: /* body: function  */
#line 79 "parser.y"
           { (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; }
#line 1615 "parser.tab.c"
    break;

  case 19: /* $@5: %empty  */
#line 80 "parser.y"
          { add('K'); }
#line 1621 "parser.tab.c"
    break;

  case 20: /* body: PRINTRF $@5 value ';'  */
#line 80 "parser.y"
                                  { (yyval.nd_obj).nd = mknode(NULL, NULL, "printrf"); }
#line 1627 "parser.tab.c"
    break;

  case 21: /* $@6: %empty  */
#line 81 "parser.y"
        { add('K'); }
#line 1633 "parser.tab.c"
    break;

  case 22: /* body: ECHOF $@6 multi_value ';'  */
#line 81 "parser.y"
                                      { (yyval.nd_obj).nd = mknode(NULL, NULL, "echof"); }
#line 1639 "parser.tab.c"
    break;

  case 23: /* body: NEW_LINE  */
#line 82 "parser.y"
           { (yyval.nd_obj).nd = mknode(NULL, NULL, "NL"); }
#line 1645 "parser.tab.c"
    break;

  case 24: /* body: body body  */
#line 83 "parser.y"
            { (yyval.nd_obj).nd = (yyvsp[-1].nd_obj).nd; }
#line 1651 "parser.tab.c"
    break;

  case 25: /* $@7: %empty  */
#line 90 "parser.y"
           { add('K'); }
#line 1657 "parser.tab.c"
    break;

  case 26: /* else: ELSE $@7 '{' body '}'  */
#line 90 "parser.y"
                                      { (yyval.nd_obj).nd = mknode(NULL, (yyvsp[-1].nd_obj).nd, (yyvsp[-4].nd_obj).name); }
#line 1663 "parser.tab.c"
    break;

  case 27: /* else: %empty  */
#line 91 "parser.y"
  { (yyval.nd_obj).nd = NULL; }
#line 1669 "parser.tab.c"
    break;

  case 28: /* condition: value relational_operator value  */
#line 94 "parser.y"
                                           { (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, (yyvsp[-1].nd_obj).name); }
#line 1675 "parser.tab.c"
    break;

  case 29: /* condition: condition AND condition  */
#line 95 "parser.y"
                          { (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, (yyvsp[-1].nd_obj).name); }
#line 1681 "parser.tab.c"
    break;

  case 30: /* condition: condition OR condition  */
#line 96 "parser.y"
                         { (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, (yyvsp[-1].nd_obj).name); }
#line 1687 "parser.tab.c"
    break;

  case 31: /* condition: TRUE  */
#line 97 "parser.y"
       { add('K'); (yyval.nd_obj).nd = NULL; }
#line 1693 "parser.tab.c"
    break;

  case 32: /* condition: FALSE  */
#line 98 "parser.y"
        { add('K'); (yyval.nd_obj).nd = NULL; }
#line 1699 "parser.tab.c"
    break;

  case 33: /* condition: %empty  */
#line 99 "parser.y"
  { (yyval.nd_obj).nd = NULL; }
#line 1705 "parser.tab.c"
    break;

  case 34: /* statement: declaration  */
#line 102 "parser.y"
                       { (yyval.nd_obj).nd = mknode(NULL, (yyvsp[0].nd_obj).nd, "declaration"); }
#line 1711 "parser.tab.c"
    break;

  case 35: /* statement: assignment  */
#line 103 "parser.y"
             { (yyval.nd_obj).nd = mknode(NULL, (yyvsp[0].nd_obj).nd, "assignment"); }
#line 1717 "parser.tab.c"
    break;

  case 36: /* statement: expression_statement  */
#line 104 "parser.y"
                       { (yyval.nd_obj).nd = mknode(NULL, (yyvsp[0].nd_obj).nd, "expression_statement"); }
#line 1723 "parser.tab.c"
    break;

  case 37: /* expression_statement: expression  */
#line 107 "parser.y"
                                 { (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; }
#line 1729 "parser.tab.c"
    break;

  case 38: /* $@8: %empty  */
#line 110 "parser.y"
                         { add('V'); }
#line 1735 "parser.tab.c"
    break;

  case 39: /* declaration: datatype ID $@8 init  */
#line 110 "parser.y"
                                            { (yyvsp[-2].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-2].nd_obj).name); struct node *temp = mknode((yyvsp[-3].nd_obj).nd, (yyvsp[-2].nd_obj).nd, "DECLARATION"); (yyval.nd_obj).nd = mknode(temp, (yyvsp[0].nd_obj).nd, "declaration"); }
#line 1741 "parser.tab.c"
    break;

  case 40: /* $@9: %empty  */
#line 113 "parser.y"
               { add('V'); }
#line 1747 "parser.tab.c"
    break;

  case 41: /* $@10: %empty  */
#line 113 "parser.y"
                                    { add('K'); }
#line 1753 "parser.tab.c"
    break;

  case 42: /* assignment: ID $@9 ASSIGN $@10 expression  */
#line 113 "parser.y"
                                                             { (yyvsp[-4].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-4].nd_obj).name); (yyvsp[-2].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-2].nd_obj).name); (yyval.nd_obj).nd = mknode((yyvsp[-4].nd_obj).nd, (yyvsp[0].nd_obj).nd, (yyvsp[-2].nd_obj).name); }
#line 1759 "parser.tab.c"
    break;

  case 43: /* assignment: ID relational_operator expression  */
#line 114 "parser.y"
                                    { add('V'); (yyvsp[-2].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-2].nd_obj).name); (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, (yyvsp[-1].nd_obj).name); }
#line 1765 "parser.tab.c"
    break;

  case 44: /* init: ASSIGN value  */
#line 117 "parser.y"
                   { (yyvsp[-1].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-1].nd_obj).name); (yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, "init"); }
#line 1771 "parser.tab.c"
    break;

  case 45: /* init: %empty  */
#line 118 "parser.y"
  { (yyval.nd_obj).nd = mknode(NULL, NULL, "NULL"); }
#line 1777 "parser.tab.c"
    break;

  case 46: /* expression: expression ADD expression  */
#line 121 "parser.y"
                                      { (yyvsp[-1].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-1].nd_obj).name); (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, (yyvsp[-1].nd_obj).name); }
#line 1783 "parser.tab.c"
    break;

  case 47: /* expression: expression SUBTRACT expression  */
#line 122 "parser.y"
                                 { (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, (yyvsp[-1].nd_obj).name); }
#line 1789 "parser.tab.c"
    break;

  case 48: /* expression: expression MULTIPLY expression  */
#line 123 "parser.y"
                                 { (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, (yyvsp[-1].nd_obj).name); }
#line 1795 "parser.tab.c"
    break;

  case 49: /* expression: expression DIVIDE expression  */
#line 124 "parser.y"
                               { (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, (yyvsp[-1].nd_obj).name); }
#line 1801 "parser.tab.c"
    break;

  case 50: /* expression: value  */
#line 125 "parser.y"
        { (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; }
#line 1807 "parser.tab.c"
    break;

  case 57: /* value: NUMBER  */
#line 136 "parser.y"
              { add('C'); (yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); }
#line 1813 "parser.tab.c"
    break;

  case 58: /* value: FLOAT_NUM  */
#line 137 "parser.y"
            { add('C'); (yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); }
#line 1819 "parser.tab.c"
    break;

  case 59: /* value: STR  */
#line 138 "parser.y"
      { add('C'); (yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); }
#line 1825 "parser.tab.c"
    break;

  case 60: /* value: ID  */
#line 139 "parser.y"
     { (yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); }
#line 1831 "parser.tab.c"
    break;

  case 61: /* value: function_call  */
#line 140 "parser.y"
                { (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; }
#line 1837 "parser.tab.c"
    break;

  case 62: /* multi_value: value ',' multi_value  */
#line 143 "parser.y"
                                   { (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, "multi_value"); }
#line 1843 "parser.tab.c"
    break;

  case 64: /* function_call: FUNC_NAME '(' param_list_opt ')'  */
#line 147 "parser.y"
                                                 { (yyvsp[-3].nd_obj).nd = mknode(NULL, NULL, "func_name"); (yyval.nd_obj).nd = mknode((yyvsp[-3].nd_obj).nd, (yyvsp[-1].nd_obj).nd, "function_call"); }
#line 1849 "parser.tab.c"
    break;

  case 65: /* $@11: %empty  */
#line 150 "parser.y"
                             { add('K'); }
#line 1855 "parser.tab.c"
    break;

  case 66: /* function: FUNC_DEF FUNC_NAME $@11 '(' param_list_opt ')' return_type_opt '{' body return '}'  */
#line 150 "parser.y"
                                                                                                      {
    (yyvsp[-10].nd_obj).nd = mknode(NULL, NULL, "func_def");
    (yyvsp[-9].nd_obj).nd = mknode(NULL, NULL, "func_name");

    struct node *temp = mknode((yyvsp[-10].nd_obj).nd, (yyvsp[-9].nd_obj).nd, "FUNCTION");

    temp = mknode(temp, (yyvsp[-6].nd_obj).nd, "FUNCTION");
    temp = mknode(temp, (yyvsp[-4].nd_obj).nd, "FUNCTION");
    temp = mknode(temp, (yyvsp[-2].nd_obj).nd, "FUNCTION");

    (yyval.nd_obj).nd = mknode(temp, (yyvsp[-1].nd_obj).nd, "function");
}
#line 1872 "parser.tab.c"
    break;

  case 67: /* $@12: %empty  */
#line 164 "parser.y"
               { add('K'); }
#line 1878 "parser.tab.c"
    break;

  case 68: /* return: RETURN $@12 value ';'  */
#line 164 "parser.y"
                                       { (yyvsp[-3].nd_obj).nd = mknode(NULL, NULL, "return"); (yyval.nd_obj).nd = mknode((yyvsp[-3].nd_obj).nd, (yyvsp[-1].nd_obj).nd, "RETURN"); }
#line 1884 "parser.tab.c"
    break;

  case 69: /* return_type_opt: return_type  */
#line 167 "parser.y"
                             { (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; }
#line 1890 "parser.tab.c"
    break;

  case 70: /* return_type_opt: %empty  */
#line 168 "parser.y"
  { (yyval.nd_obj).nd = NULL; }
#line 1896 "parser.tab.c"
    break;

  case 71: /* return_type: ':' datatype  */
#line 171 "parser.y"
                          { (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; }
#line 1902 "parser.tab.c"
    break;

  case 72: /* param_list_opt: param_list  */
#line 174 "parser.y"
                           { (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; }
#line 1908 "parser.tab.c"
    break;

  case 73: /* param_list_opt: %empty  */
#line 175 "parser.y"
  { (yyval.nd_obj).nd = NULL; }
#line 1914 "parser.tab.c"
    break;

  case 74: /* param_list: param_list ',' param  */
#line 178 "parser.y"
                                 { (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, "param_list"); }
#line 1920 "parser.tab.c"
    break;

  case 75: /* param_list: param  */
#line 179 "parser.y"
        { (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; }
#line 1926 "parser.tab.c"
    break;

  case 76: /* param: datatype ID  */
#line 182 "parser.y"
                   { (yyvsp[0].nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); (yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, "param"); }
#line 1932 "parser.tab.c"
    break;

  case 77: /* end: END  */
#line 185 "parser.y"
         { add('K'); (yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); }
#line 1938 "parser.tab.c"
    break;


#line 1942 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 188 "parser.y"


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
