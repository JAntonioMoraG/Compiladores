/*
DATOS
*Mora Guzman Jose Antonio
*Practica 5 Decisiones y Ciclos
*Opcion calculadora vectores
*fecha 2-nov-2021
*grupo 3CM17
*materia: compiladores
*/
#include "hoc.h"
#include "y.tab.h"
#include <math.h>

static struct { 
    char   *name;	/* Palabras clave */
    int    kval;
} keywords[] = {
    "if",		IF,
    "else" ,	ELSE,
    "while",	WHILE,
    "print",	PRINT,
    0,      0,
};

int init(){ /* Se instalan las constantes y predefinidos en la tabla */
    int i;
    Symbol * s;
    for (i = 0; keywords[i].name; i++)
	    install(keywords[i].name, keywords[i].kval, NULL);
}
