/*
DATOS
*Mora Guzman Jose Antonio
*Practica 2 Java para modo grafico
*Opcion Circulos Lineas y Rectangulos
*fecha 19-10-2021
*grupo 3CM17
*materia: compiladores
*/
public class Tabla {
	Simbolo listaSimbolo;
	Tabla(){
		listaSimbolo=null;
	}

Simbolo install(String s, short t, double d){
		Simbolo simb=new Simbolo(s,t,d);
		simb.ponSig(listaSimbolo);
		listaSimbolo=simb;
		return simb;
	}

Simbolo lookup(String s){
	for(Simbolo sp=listaSimbolo; sp!=null; sp=sp.obtenSig())
		if((sp.obtenNombre()).equals(s))
			return sp;
	return null;
	}
}
