/*
DATOS
*Mora Guzman Jose Antonio
*Practica 3 tabla de simbolos
*Opcion calculadora vectores (Agregar Variables)
*fecha 24-10-2021
*grupo 3CM17
*materia: compiladores
*/
#include "vector_cal.h"
typedef struct Symbol { /* entrada de la tabla de símbolos */
	char   *name;
	short   type;   /* VAR, BLTIN, UNDEF */
	union {
		double comp;	       /* si es VAR */
		double  (*ptr)();      /* si es BLTIN */
		Vector* vec;
	} u;
	struct Symbol   *next;  /* para ligarse a otro */ 
} Symbol;

Symbol *install(char *s,int t, Vector *vec), *lookup(char *s);