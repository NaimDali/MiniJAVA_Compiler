
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Compiler.y"

    #include "semantique.c"
    #include "generateur.c"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    char nom[256];
    int numval;
    char nomaff[256];
    char oper[10];
    int indexIf;
    int indexWhile1;
    int indexWhile2;
    
	int yylex(void);
	extern int yylineno;
    extern int i;
    extern int j;

	void yyerror(const char *msg);

    void BeginSemantique();
    void EndSemantique();
    void BeginCodeGen();
    void EndCodeGen();


/* Line 189 of yacc.c  */
#line 102 "Compiler.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     identifier = 258,
     type_int = 259,
     type_boolean = 260,
     type_string = 261,
     BOOLEAN_LITERAL = 262,
     INTEGER_LITERAL = 263,
     STRING_LITERAL = 264,
     keyword_class = 265,
     keyword_public = 266,
     keyword_main = 267,
     keyword_extends = 268,
     keyword_return = 269,
     keyword_if = 270,
     keyword_else = 271,
     keyword_while = 272,
     keyword_System_out_println = 273,
     keyword_length = 274,
     keyword_this = 275,
     keyword_new = 276,
     keyword_static = 277,
     keyword_void = 278,
     opening_parenthesis = 279,
     closing_parenthesis = 280,
     opening_bracket = 281,
     closing_bracket = 282,
     opening_curly_brace = 283,
     closing_curly_brace = 284,
     operator_affectation = 285,
     arith_operator_add = 286,
     arith_operator_substract = 287,
     arith_operator_multiply = 288,
     logical_operator_not = 289,
     logical_operator_and = 290,
     logical_operator_less_than = 291,
     logical_operator_less_or_equal_than = 292,
     semicolon = 293,
     point = 294,
     comma = 295
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 184 "Compiler.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   167

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNRULES -- Number of states.  */
#define YYNSTATES  186

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    10,    11,    24,    25,    26,
      27,    38,    41,    42,    50,    56,    59,    62,    63,    66,
      67,    72,    74,    75,    78,    81,    82,    83,    84,    98,
     102,   104,   106,   108,   111,   113,   114,   118,   120,   121,
     122,   136,   137,   138,   148,   154,   159,   167,   168,   172,
     175,   178,   181,   184,   191,   197,   204,   208,   213,   214,
     219,   220,   225,   230,   234,   235,   242,   243,   249,   250,
     253,   254,   259,   261,   263,   265,   267,   269,   271,   273,
     275,   277
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      42,     0,    -1,    43,    51,    -1,    44,    47,    -1,    -1,
      -1,    53,    28,    11,    22,    23,    12,    45,    24,     6,
      46,    26,    27,    -1,    -1,    -1,    -1,     3,    48,    25,
      49,    28,    64,    29,    50,    59,    29,    -1,    52,    51,
      -1,    -1,    53,    13,    82,    28,    54,    59,    29,    -1,
      53,    28,    54,    59,    29,    -1,    10,    82,    -1,    55,
      54,    -1,    -1,    58,    38,    -1,    -1,    58,    57,    40,
      56,    -1,    58,    -1,    -1,    63,    82,    -1,    60,    59,
      -1,    -1,    -1,    -1,    11,    58,    61,    24,    56,    25,
      62,    28,    64,    14,    70,    38,    29,    -1,     4,    26,
      27,    -1,     5,    -1,     4,    -1,     6,    -1,    65,    64,
      -1,    65,    -1,    -1,    28,    64,    29,    -1,    55,    -1,
      -1,    -1,    15,    24,    70,    25,    66,    28,    64,    29,
      67,    16,    28,    64,    29,    -1,    -1,    -1,    17,    68,
      24,    70,    25,    69,    28,    64,    29,    -1,    18,    24,
      70,    25,    38,    -1,    84,    30,    70,    38,    -1,    84,
      26,    70,    27,    30,    70,    38,    -1,    -1,     8,    71,
      72,    -1,     7,    72,    -1,     9,    72,    -1,    83,    72,
      -1,    20,    72,    -1,    21,     4,    26,    70,    27,    72,
      -1,    21,    82,    24,    25,    72,    -1,    21,    82,    24,
      78,    25,    72,    -1,    34,    70,    72,    -1,    24,    70,
      25,    72,    -1,    -1,    80,    70,    73,    72,    -1,    -1,
      81,    70,    74,    72,    -1,    26,    70,    27,    72,    -1,
      39,    19,    72,    -1,    -1,    77,    24,    78,    25,    75,
      72,    -1,    -1,    77,    24,    25,    76,    72,    -1,    -1,
      39,    82,    -1,    -1,    70,    79,    40,    78,    -1,    70,
      -1,    31,    -1,    33,    -1,    32,    -1,    35,    -1,    36,
      -1,    37,    -1,     3,    -1,     3,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    81,    81,    85,    88,    88,    88,    91,    91,    91,
      91,    94,    95,    98,   102,   106,   110,   111,   114,   118,
     118,   119,   120,   124,   128,   129,   133,   133,   133,   136,
     137,   138,   139,   142,   143,   144,   147,   148,   149,   150,
     149,   152,   152,   152,   154,   155,   157,   161,   161,   162,
     163,   164,   165,   166,   168,   170,   173,   174,   178,   178,
     179,   179,   180,   182,   184,   184,   187,   187,   189,   192,
     195,   195,   197,   200,   201,   203,   206,   207,   209,   213,
     215,   217
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "identifier", "type_int", "type_boolean",
  "type_string", "BOOLEAN_LITERAL", "INTEGER_LITERAL", "STRING_LITERAL",
  "keyword_class", "keyword_public", "keyword_main", "keyword_extends",
  "keyword_return", "keyword_if", "keyword_else", "keyword_while",
  "keyword_System_out_println", "keyword_length", "keyword_this",
  "keyword_new", "keyword_static", "keyword_void", "opening_parenthesis",
  "closing_parenthesis", "opening_bracket", "closing_bracket",
  "opening_curly_brace", "closing_curly_brace", "operator_affectation",
  "arith_operator_add", "arith_operator_substract",
  "arith_operator_multiply", "logical_operator_not",
  "logical_operator_and", "logical_operator_less_than",
  "logical_operator_less_or_equal_than", "semicolon", "point", "comma",
  "$accept", "Program", "MainClass", "MainHead", "$@1", "$@2", "MainBody",
  "$@3", "$@4", "$@5", "ClassDeclarationS", "ClassDeclaration",
  "ClassHead", "VarDeclarationS", "VarDeclaration", "VariableS", "$@6",
  "Variable", "MethodDeclarationS", "MethodDeclaration", "$@7", "$@8",
  "Type", "StatementS", "Statement", "$@9", "$@10", "$@11", "$@12",
  "Expression", "$@13", "ExpressionComp", "$@14", "$@15", "$@16", "$@17",
  "MethodCall", "ExpressionS", "$@18", "Operator", "Logic", "Identifier",
  "Identifierexp", "Identifieraff", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    43,    45,    46,    44,    48,    49,    50,
      47,    51,    51,    52,    52,    53,    54,    54,    55,    57,
      56,    56,    56,    58,    59,    59,    61,    62,    60,    63,
      63,    63,    63,    64,    64,    64,    65,    65,    66,    67,
      65,    68,    69,    65,    65,    65,    65,    71,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    73,    72,
      74,    72,    72,    72,    75,    72,    76,    72,    72,    77,
      79,    78,    78,    80,    80,    80,    81,    81,    81,    82,
      83,    84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     0,    12,     0,     0,     0,
      10,     2,     0,     7,     5,     2,     2,     0,     2,     0,
       4,     1,     0,     2,     2,     0,     0,     0,    13,     3,
       1,     1,     1,     2,     1,     0,     3,     1,     0,     0,
      13,     0,     0,     9,     5,     4,     7,     0,     3,     2,
       2,     2,     2,     6,     5,     6,     3,     4,     0,     4,
       0,     4,     4,     3,     0,     6,     0,     5,     0,     2,
       0,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    12,     0,     0,    79,    15,     1,     2,
      12,     0,     7,     3,     0,    11,     0,    17,     0,     0,
       0,    31,    30,    32,    25,    17,     0,     0,     8,     0,
      17,     0,     0,     0,    25,    16,    18,    23,     0,     0,
      25,    29,    26,    14,    24,    35,     4,     0,     0,    81,
       0,    41,     0,    35,    37,     0,    34,     0,     0,    13,
      22,     0,     0,     0,     0,     9,    33,     0,     0,     0,
       0,    19,    80,    68,    47,    68,    68,     0,     0,     0,
       0,    68,     0,     0,    36,    25,     0,     0,     5,    27,
       0,     0,    73,    75,    74,    76,    77,    78,     0,    49,
       0,     0,     0,    68,    50,    52,     0,     0,     0,    68,
      38,    51,     0,     0,     0,     0,    45,     0,     0,    22,
       0,    68,    69,     0,    58,    60,    48,     0,     0,    68,
      56,     0,    42,    44,    10,     0,     0,    35,    20,    68,
      63,    66,    70,     0,    68,    68,     0,    68,     0,    57,
      35,     0,     0,     6,     0,    62,    68,     0,    64,    59,
      61,    68,    54,    68,     0,    35,    46,     0,    67,     0,
      68,    53,    55,    39,     0,     0,    71,    65,     0,    43,
       0,     0,    28,    35,     0,    40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    58,   117,    13,    18,    38,    85,
       9,    10,    11,    24,    54,    70,    90,    26,    33,    34,
      48,   118,    27,    55,    56,   131,   178,    62,   151,   142,
     103,    99,   144,   145,   170,   156,   100,   143,   157,   101,
     102,     7,    81,    57
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -117
static const yytype_int16 yypact[] =
{
       5,    13,    18,     5,    31,    10,  -117,  -117,  -117,  -117,
       5,    12,  -117,  -117,    39,  -117,    13,    40,    16,    32,
      29,    35,  -117,  -117,    45,    40,    25,    13,  -117,    41,
      40,    38,    40,    37,    45,  -117,  -117,  -117,    42,    55,
      45,  -117,  -117,  -117,  -117,   128,  -117,    43,    49,  -117,
      54,  -117,    56,   128,  -117,    50,   128,    -2,    57,  -117,
      40,    28,    58,    28,    60,  -117,  -117,    28,    28,    77,
      62,    65,  -117,   116,  -117,   116,   116,    23,    28,    28,
      69,   116,    28,    70,  -117,    45,    72,    47,  -117,  -117,
      61,    28,  -117,  -117,  -117,  -117,  -117,  -117,    11,  -117,
      82,    28,    28,   116,  -117,  -117,    81,    89,    71,   116,
    -117,  -117,    92,    76,    96,    88,  -117,    98,    93,    40,
     101,   116,  -117,    95,  -117,  -117,  -117,    28,   102,   116,
    -117,   107,  -117,  -117,  -117,    28,   110,   128,  -117,   116,
    -117,  -117,   113,   114,   116,   116,   117,   116,   115,  -117,
     128,   122,   103,  -117,   140,  -117,   116,   118,  -117,  -117,
    -117,   116,  -117,   116,   130,   128,  -117,    28,  -117,    28,
     116,  -117,  -117,  -117,   131,   119,  -117,  -117,   145,  -117,
     133,   135,  -117,   128,   136,  -117
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
     154,  -117,   166,    -8,    30,    48,  -117,   -31,   -27,  -117,
    -117,  -117,  -117,   -53,  -117,  -117,  -117,  -117,  -117,   -59,
    -117,   -70,  -117,  -117,  -117,  -117,  -117,  -116,  -117,  -117,
    -117,    -6,  -117,  -117
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -73
static const yytype_int16 yytable[] =
{
      64,    42,    80,    66,    83,   104,   105,    44,    86,    87,
      20,   111,   148,    47,     6,     1,     6,    35,     8,   108,
     109,    37,    40,   112,    67,    16,     6,   106,    68,    71,
     121,    72,   120,   126,    12,    73,    74,    75,    14,   130,
      17,    28,   124,   125,    21,    22,    23,    25,    76,    77,
      19,   140,    78,   176,    29,    25,    32,    30,   114,   149,
      25,    31,    79,    36,    39,    41,    43,    46,   146,   155,
      45,   107,    59,    60,   159,   160,   152,   162,    61,    65,
      63,    69,    82,    88,   154,   116,   168,    89,    71,    84,
     -21,   171,   122,   172,   110,   113,   129,   164,    72,   115,
     177,   119,    73,    74,    75,    72,   123,   127,   175,    73,
      74,    75,   174,   128,   133,    76,    77,   132,   135,    78,
     141,   137,    76,    77,   136,   134,    78,   147,   139,    79,
     184,    49,    21,    22,    23,   150,    79,   153,   -72,   158,
     163,   166,    91,    50,   161,    51,    52,    92,    93,    94,
     165,    95,    96,    97,   167,    98,    53,   180,   169,   173,
     179,   181,   182,   183,    15,   185,     5,   138
};

static const yytype_uint8 yycheck[] =
{
      53,    32,    61,    56,    63,    75,    76,    34,    67,    68,
      16,    81,   128,    40,     3,    10,     3,    25,     0,    78,
      79,    27,    30,    82,    26,    13,     3,     4,    30,    60,
      19,     3,    91,   103,     3,     7,     8,     9,    28,   109,
      28,    25,   101,   102,     4,     5,     6,    17,    20,    21,
      11,   121,    24,   169,    22,    25,    11,    28,    85,   129,
      30,    26,    34,    38,    23,    27,    29,    12,   127,   139,
      28,    77,    29,    24,   144,   145,   135,   147,    24,    29,
      24,    24,    24,     6,   137,    38,   156,    25,   119,    29,
      25,   161,    98,   163,    25,    25,    25,   150,     3,    27,
     170,    40,     7,     8,     9,     3,    24,    26,   167,     7,
       8,     9,   165,    24,    38,    20,    21,    25,    30,    24,
      25,    28,    20,    21,    26,    29,    24,    25,    27,    34,
     183,     3,     4,     5,     6,    28,    34,    27,    25,    25,
      25,    38,    26,    15,    27,    17,    18,    31,    32,    33,
      28,    35,    36,    37,    14,    39,    28,    38,    40,    29,
      29,    16,    29,    28,    10,    29,     0,   119
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    42,    43,    44,    53,     3,    82,     0,    51,
      52,    53,     3,    47,    28,    51,    13,    28,    48,    11,
      82,     4,     5,     6,    54,    55,    58,    63,    25,    22,
      28,    26,    11,    59,    60,    54,    38,    82,    49,    23,
      54,    27,    58,    29,    59,    28,    12,    59,    61,     3,
      15,    17,    18,    28,    55,    64,    65,    84,    45,    29,
      24,    24,    68,    24,    64,    29,    64,    26,    30,    24,
      56,    58,     3,     7,     8,     9,    20,    21,    24,    34,
      70,    83,    24,    70,    29,    50,    70,    70,     6,    25,
      57,    26,    31,    32,    33,    35,    36,    37,    39,    72,
      77,    80,    81,    71,    72,    72,     4,    82,    70,    70,
      25,    72,    70,    25,    59,    27,    38,    46,    62,    40,
      70,    19,    82,    24,    70,    70,    72,    26,    24,    25,
      72,    66,    25,    38,    29,    30,    26,    28,    56,    27,
      72,    25,    70,    78,    73,    74,    70,    25,    78,    72,
      28,    69,    70,    27,    64,    72,    76,    79,    25,    72,
      72,    27,    72,    25,    64,    28,    38,    14,    72,    40,
      75,    72,    72,    29,    64,    70,    78,    72,    67,    29,
      38,    16,    29,    28,    64,    29
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:

/* Line 1455 of yacc.c  */
#line 88 "Compiler.y"
    { g_type = tVoid; verifierFoncID("main"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 88 "Compiler.y"
    {g_type = tString;;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 91 "Compiler.y"
    { verifierVarID(nom);;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 91 "Compiler.y"
    { foncDecEnd(); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 91 "Compiler.y"
    {finFonction();;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 91 "Compiler.y"
    {finClass();tabCodeInt[indextab]=creerCode("SORTIE");indextab++;;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 98 "Compiler.y"
    {finClass();;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 102 "Compiler.y"
    {finClass();;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 106 "Compiler.y"
    {verifierClassID(nom);;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 118 "Compiler.y"
    {verifierVarID(nom);;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 119 "Compiler.y"
    {verifierVarID(nom);;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 133 "Compiler.y"
    { verifierFoncID(nom); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 133 "Compiler.y"
    {foncDecEnd();;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 133 "Compiler.y"
    {finFonction();;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 136 "Compiler.y"
    { g_type = tInt; ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 137 "Compiler.y"
    { g_type = tBoolean; ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 138 "Compiler.y"
    { g_type = tInt; ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 139 "Compiler.y"
    { g_type = tString; ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 149 "Compiler.y"
    {tabCodeInt[indextab]=creerCode("SIFAUX");indexIf=indextab;indextab++;;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 150 "Compiler.y"
    {tabCodeInt[indextab]=creerCode("SAUT");indextab++;tabCodeInt[indexIf].operande=indextab;indexIf=indextab-1;;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 151 "Compiler.y"
    {tabCodeInt[indexIf].operande=indextab;;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 152 "Compiler.y"
    {indexWhile1=indextab;;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 152 "Compiler.y"
    {tabCodeInt[indextab]=creerCode("TANTQUEFAUX");indexWhile2=indextab;indextab++;;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 153 "Compiler.y"
    {tabCodeInt[indextab]=creerOp("TANTQUE",indexWhile1);indextab++;tabCodeInt[indexWhile2].operande=indextab;;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 155 "Compiler.y"
    {tabCodeInt[indextab]=creerOp("STORE",getAddress(nomaff,table_local));indextab++;;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 161 "Compiler.y"
    {tabCodeInt[indextab]=creerOp("LDC",numval);indextab++;;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 178 "Compiler.y"
    {tabCodeInt[indextab]=creerCode(oper);indextab++;;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 179 "Compiler.y"
    {tabCodeInt[indextab]=creerCode(oper);indextab++;;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 184 "Compiler.y"
    {foncCallEnd();;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 187 "Compiler.y"
    {g_nbParam = 0;foncCallEnd();;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 192 "Compiler.y"
    {verifierFoncIDDeclare(nom);;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 195 "Compiler.y"
    {g_nbParam ++;;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 197 "Compiler.y"
    {g_nbParam ++;;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 200 "Compiler.y"
    {strcpy(oper, "ADD");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 201 "Compiler.y"
    {strcpy(oper, "MUL");;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 203 "Compiler.y"
    {strcpy(oper, "SUB");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 207 "Compiler.y"
    {strcpy(oper, "INF");;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 209 "Compiler.y"
    {strcpy(oper, "INFE");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 215 "Compiler.y"
    {checkID(nom);tabCodeInt[indextab]=creerOp("LDV",getAddress(nom,table_local));indextab++;;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 217 "Compiler.y"
    {checkIDOnInit(nom); strcpy(nomaff, nom);;}
    break;



/* Line 1455 of yacc.c  */
#line 1820 "Compiler.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



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
		      yytoken, &yylval);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 221 "Compiler.y"







extern FILE *yyin;

int main(int argc, char **argv)
{
yyin = fopen(argv[1], "r");
 BeginCodeGen();
 BeginSemantique();
 yyparse();
 EndSemantique();
 EndCodeGen();
}

void BeginSemantique()
{
	table = NULL;
	table_local = NULL;
	table_class = NULL;

	g_type = NODE_TYPE_UNKNOWN;

	g_nbParam = 0;

	g_IfFonc = 0 ;
    g_IfFoncParameters = 0 ;
    g_IfClass = 0 ;
}

void EndSemantique()
{
    fclose(yyin);
    char c;
    c=' ';
    if(i>1)
        c='s';
	if(i==0)
        printf("no errors were found\n");
    else
        printf("%d error%c found\n",i,c);
    c=' ';
    if(j>1)
        c='s';
    if(j!=0){
		if(i==0)
        printf("%d warning%c found\n",j,c);
	}


    destructSymbolsTable(table_local);
	destructSymbolsTable(table);
	destructSymbolsTable(table_class);
}

void BeginCodeGen(){
    indextab = 0;
}

void EndCodeGen(){
    genererCode();
}

    

