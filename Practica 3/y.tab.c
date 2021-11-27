/*
DATOS
*Mora Guzman Jose Antonio
*Practica 3 tabla de simbolos
*Opcion calculadora vectores (Agregar Variables)
*fecha 24-10-2021
*grupo 3CM17
*materia: compiladores
*/

/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 11 "vector_cal.y"
    #include "hoc.h"
    /*#include "vector_cal.h"*/
    #include <math.h>
    #include <stdio.h>

    void yyerror(char* s);
    int yylex();
    /*Funciones añadida*/
    void warning(char* s, char* t);
#line 22 "vector_cal.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
    double comp;
    Vector* vec;
    /*Añadida */
    Symbol* sym;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 45 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define NUMBER 257
#define VAR 258
#define BLTIN 259
#define UNDEF 260
#define UNARYMINUS 261
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    0,    0,    0,    0,    4,    1,    1,    1,
    1,    1,    1,    1,    1,    3,    3,    3,    2,
};
static const YYINT yylen[] = {                            2,
    0,    2,    3,    3,    3,    3,    3,    1,    1,    1,
    3,    3,    3,    3,    3,    1,    3,    3,    5,
};
static const YYINT yydefred[] = {                         1,
    0,    0,    0,    0,    2,    0,    0,    0,    8,    0,
    0,    6,    0,    0,    0,    0,   10,    0,    0,    0,
    0,    0,    0,    4,    5,    3,    0,    0,   18,    0,
    0,    0,   14,   15,    0,    0,   19,
};
static const YYINT yydgoto[] = {                          1,
    8,    9,   10,   17,
};
static const YYINT yysindex[] = {                         0,
  -10,   -6,  -34,  -52,    0,  -90, -245,   10,    0,    7,
    9,    0,  -90,  -90,  -34,  -29,    0, -236,  -90,  -90,
 -235,  -90,  -90,    0,    0,    0,  -11,  -12,    0, -225,
  -32,  -32,    0,    0,  -12,  -57,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,   39,   -8,    0,    0,    0,    0,    0,    0,
  -17,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   -3,   -5,    0,    0,
    1,    5,    0,    0,   47,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   48,    0,    0,   57,
};
#define YYTABLESIZE 248
static const YYINT yytable[] = {                          5,
    7,    9,   22,   12,    7,   22,   13,   13,   14,   21,
   11,   18,   21,   19,   12,   20,   25,   10,   26,   24,
   30,   33,   22,   22,   10,   10,    9,   10,   10,   21,
   19,   36,   20,    9,    9,   37,    9,    9,   13,   13,
    7,   13,   13,   11,   22,   11,   11,   12,   16,   12,
   12,   21,   19,   16,   20,   23,   17,   11,    0,    0,
   27,   28,    0,    0,    0,    0,   31,   32,    0,   34,
   35,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    7,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   29,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    6,    0,    9,    0,    0,    7,    0,
   13,    0,    0,    0,   11,    0,    0,    0,   12,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   15,    4,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    2,    3,    4,
};
static const YYINT yycheck[] = {                         10,
   91,   10,   35,   10,   10,   35,   10,   42,   61,   42,
   10,  257,   42,   43,   10,   45,   10,   35,   10,   10,
  257,  257,   35,   35,   42,   43,   35,   45,   46,   42,
   43,  257,   45,   42,   43,   93,   45,   46,   42,   43,
   46,   45,   46,   43,   35,   45,   46,   43,   10,   45,
   46,   42,   43,    6,   45,   46,   10,    1,   -1,   -1,
   13,   14,   -1,   -1,   -1,   -1,   19,   20,   -1,   22,
   23,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   91,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  124,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  124,   -1,  124,   -1,   -1,  124,   -1,
  124,   -1,   -1,   -1,  124,   -1,   -1,   -1,  124,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  256,  257,  258,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 261
#define YYUNDFTOKEN 268
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,"'\\n'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,"'#'",0,0,0,0,0,0,"'*'","'+'",0,"'-'","'.'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'['",0,"']'",0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'|'",0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,"NUMBER","VAR","BLTIN","UNDEF","UNARYMINUS",0,0,0,0,0,0,
"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : list",
"list :",
"list : list '\\n'",
"list : list asgn '\\n'",
"list : list exp '\\n'",
"list : list number '\\n'",
"list : list error '\\n'",
"asgn : VAR '=' exp",
"exp : vect",
"exp : VAR",
"exp : asgn",
"exp : exp '+' exp",
"exp : exp '-' exp",
"exp : NUMBER '*' exp",
"exp : exp '*' NUMBER",
"exp : exp '#' exp",
"number : NUMBER",
"number : exp '.' exp",
"number : '|' exp '|'",
"vect : '[' NUMBER NUMBER NUMBER ']'",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 116 "vector_cal.y"


#include <stdio.h>
#include <ctype.h>

char* progname;
int lineno = 1;

void main(int argc, char* argv[]){
  progname = argv[0];
  yyparse();
}

int yylex(){
  int c;
  while((c = getchar()) == ' '|| c == '\t')
  /**Salta blancos**/;
  if(c == EOF)
    return 0;
  if(isdigit(c)){
    ungetc(c, stdin);
    scanf("%lf", &yylval.comp);
    return NUMBER;
  }

  if(isalpha(c)){ //checar no jacs
    Symbol* s;
    char sbuf[200];
    char* p = sbuf;
    do{
      *p++ = c;
    } while((c = getchar()) != EOF && isalnum(c));

    ungetc(c, stdin);
    *p = '\0';
    if((s = lookup(sbuf)) == (Symbol* )NULL) //buscar
      s = install(sbuf, UNDEF, NULL); // instalo
    yylval.sym = s;

    if(s -> type == UNDEF) 
      return VAR;
    else 
      return s -> type;
  }
  if(c == '\n')
    lineno++;
  return c; 
}

void yyerror(char* s){
  warning(s, (char* )0);
}

void warning(char* s, char* t){
  fprintf(stderr, "%s: %s", progname, s);
  if(t)
    fprintf(stderr, "%s", t);
  fprintf(stderr, "\tCerca de la linea %d\n", lineno);
}
#line 310 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 4:
#line 61 "vector_cal.y"
	{imprimeVector(yystack.l_mark[-1].vec);}
break;
case 5:
#line 62 "vector_cal.y"
	{printf("\t%lf\n", yystack.l_mark[-1].comp);}
break;
case 6:
#line 63 "vector_cal.y"
	{yyerror;}
break;
case 7:
#line 69 "vector_cal.y"
	{yyval.vec = yystack.l_mark[-2].sym -> u.vec = yystack.l_mark[0].vec;
                            yystack.l_mark[-2].sym -> type = VAR;}
break;
case 8:
#line 73 "vector_cal.y"
	{yyval.vec = yystack.l_mark[0].vec;}
break;
case 9:
#line 75 "vector_cal.y"
	{printf("\n%s = ", yystack.l_mark[0].sym -> name);
                        if(yystack.l_mark[0].sym -> type == UNDEF) /*Verificamos si existe la variable*/
                          printf("Variable no definida %s\n", yystack.l_mark[0].sym -> name);
                        yyval.vec = yystack.l_mark[0].sym -> u.vec;}
break;
case 11:
#line 86 "vector_cal.y"
	{yyval.vec = sumaVector(yystack.l_mark[-2].vec, yystack.l_mark[0].vec);}
break;
case 12:
#line 88 "vector_cal.y"
	{yyval.vec = restaVector(yystack.l_mark[-2].vec, yystack.l_mark[0].vec);}
break;
case 13:
#line 90 "vector_cal.y"
	{yyval.vec = escalarVector(yystack.l_mark[-2].comp, yystack.l_mark[0].vec);}
break;
case 14:
#line 92 "vector_cal.y"
	{yyval.vec = escalarVector(yystack.l_mark[0].comp, yystack.l_mark[-2].vec);}
break;
case 15:
#line 94 "vector_cal.y"
	{yyval.vec = productoCruz(yystack.l_mark[-2].vec, yystack.l_mark[0].vec);}
break;
case 17:
#line 102 "vector_cal.y"
	{yyval.comp = productoPunto(yystack.l_mark[-2].vec, yystack.l_mark[0].vec);}
break;
case 18:
#line 103 "vector_cal.y"
	{yyval.comp = vectorMagnitud(yystack.l_mark[-1].vec);}
break;
case 19:
#line 109 "vector_cal.y"
	{  Vector* v = creaVector(3);
                                            v -> vec[0] = yystack.l_mark[-3].comp;
                                            v -> vec[1] = yystack.l_mark[-2].comp;
                                            v -> vec[2] = yystack.l_mark[-1].comp;
                                            yyval.vec = v;}
break;
#line 576 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
