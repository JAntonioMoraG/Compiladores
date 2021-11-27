/*
DATOS
*Mora Guzman Jose Antonio
*Practica 3 tabla de simbolos
*Opcion calculadora vectores (Agregar Variables)
*fecha 24-10-2021
*grupo 3CM17
*materia: compiladores
*/

#define NUMBER 257
#define VAR 258
#define BLTIN 259
#define UNDEF 260
#define UNARYMINUS 261
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
extern YYSTYPE yylval;
