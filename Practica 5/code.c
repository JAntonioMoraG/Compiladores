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
#include <stdio.h>
#define NSTACK 256 
static Datum stack[NSTACK];     
static Datum* stackp;           
#define NPROG 2000
Inst prog[NPROG];   
Inst* progp;                           
Inst* pc;          

void initcode(){
    stackp = stack;  
    progp = prog;       
                          
}

void push(d)
    Datum d;
{     
    if( stackp >= &stack[NSTACK] )
        execerror("stack overflow", (char *) 0);
    *stackp++ = d;
}

Datum pop(){           
    if( stackp <= stack )
        execerror("stack underflow", (char *) 0);
    return *--stackp;
}

void constpush(){       
    Datum d;
    d.val = ((Symbol *)*pc++)->u.vec;  
                                          
    push(d);
}

void constpushd(){       
    Datum d;
    d.num = ((Symbol  *)*pc++)->u.comp;    
                                           
    push(d);
}

void varpush(){    
    Datum d;    
    d.sym = (Symbol  *)(*pc++); 
    push(d);
}

void eval( ){
    Datum d;
    d = pop();
    if( d.sym->type == INDEF )
        execerror("undefined variable",d.sym->name); 
    d.val = d.sym->u.vec;    
    push(d);
}

/**** FUNCIONES PARA NUESTROS VECTORES ****/
//En esta sección hacemos uso de la máquina
//virtual de pila
/****                                  ****/
void add(){
    Datum d1, d2;
    d2 = pop();
    d1 = pop();
    d1.val = sumaVector(d1.val, d2.val); 
    push(d1);
}

void sub(){
    Datum d1, d2;
    d2 = pop();
    d1 = pop();
    d1.val = restaVector(d1.val, d2.val);
    push(d1);
}

void escalar(){
    Datum d1, d2;
    d2 = pop();
    d1 = pop();
    d1.val = escalarVector(d1.num, d2.val);
    push(d1);
}

void producto_punto(){
    Datum d1, d2;
    double d3;
    d2 = pop();
    d1 = pop();
    d3 = productoPunto(d1.val, d2.val);
    push((Datum)d3);
}

void producto_cruz(){
    Datum d1, d2;
    d2 = pop();
    d1 = pop();
    d1.val = productoCruz(d1.val, d2.val);
    push(d1);
}

void magnitud(){
    Datum d1;
    d1 = pop();
    d1.num = vectorMagnitud(d1.val);
    push(d1);
}

void assign( ){      
    Datum d1, d2;
    d1 = pop();
    d2 = pop();
    if(d1.sym->type != VAR && d1.sym->type != INDEF)
        execerror("assignment to non-variable", d1.sym->name);
    d1.sym->u.vec = d2.val;
    d1.sym->type = VAR;
    push(d2);
}

void print(){       
    Datum d;
    d = pop();

    imprimeVector(d.val);
}

void printd(){       
    Datum d;
    d = pop();
    printf("%lf\n",d.num);
}

Inst *code(Inst f){    
    Inst *oprogp = progp;    
    if (progp >= &prog [ NPROG ])    
		execerror("program too big", (char *) 0);
    *progp++ = f;           
                              
    return oprogp;
}

void execute( Inst* p){      
    for( pc = p; *pc != STOP; )
                                
        (*(*pc++))();            
    
}


/********* Funciones de comparacion *********/
void mayor(){
    Datum d1, d2;
    d2 = pop();
    d1 = pop();
    d1.num = (int)( vectorMagnitud(d1.val) > vectorMagnitud(d2.val) );
    push(d1);
}

void menor(){
    Datum d1, d2;
    d2 = pop();
    d1 = pop();
    d1.num = (int)( vectorMagnitud(d1.val) < vectorMagnitud(d2.val) );
    push(d1);
}

void mayorIgual(){
    Datum d1, d2;
    d2 = pop();
    d1 = pop();
    d1.num = (int)( vectorMagnitud(d1.val) >= vectorMagnitud(d2.val) );
    push(d1);
}

void menorIgual(){
    Datum d1, d2;
    d2 = pop();
    d1 = pop();
    d1.num = (int)( vectorMagnitud(d1.val) <= vectorMagnitud(d2.val) );
    push(d1);
}

void igual(){
    Datum d1, d2;
    d2 = pop();
    d1 = pop();
    d1.num = (int)( vectorMagnitud(d1.val) == vectorMagnitud(d2.val) );
    push(d1);
}

void diferente(){
    Datum d1, d2;
    d2 = pop();
    d1 = pop();
    d1.num = (int)( vectorMagnitud(d1.val) != vectorMagnitud(d2.val) );
    push(d1);
}

void and(){
    Datum d1, d2;
    d2 = pop();
    d1 = pop();
    d1.num =(double)(d1.num != 0.0 && d2.num != 0.0);
    push(d1);
}

void or(){
    Datum d1, d2;
    d2 = pop();
    d1 = pop();
    d1.num = (double)(d1.num != 0.0 || d2.num != 0.0);
    push(d1);
}

void not(){
    Datum d1;
    d1 = pop();
    d1.num = (double)(d1.num != 0.0);
    push(d1);
}
/********* Ciclos *********/
void whilecode(){
    Datum d;
    Inst* savepc = pc;     
    execute(savepc + 2);    
    d = pop();
    while(d.val){
        execute(* ( (Inst **)(savepc) ));   
        execute(savepc + 2);
        d = pop();
    }
    pc = *((Inst **)(savepc + 1)); 
}

void ifcode(){
    Datum d;
    Inst* savepc = pc;     
    execute(savepc + 3);    
    d = pop();
    if(d.val)
        execute(*((Inst **)(savepc)));
    else if(*((Inst **)(savepc + 1)))      
        execute(*((Inst **)(savepc + 1)));
    pc = *((Inst **)(savepc + 2));
}

void bltin(){  
    Datum d;
    d = pop();
    d.val = (*(Vector * (*)() )(*pc++))(d.val);
    push(d);    
}
