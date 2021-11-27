/*
DATOS
*Mora Guzman Jose Antonio
*Practica 2 Java para modo grafico
*Opcion Circulos Lineas y Rectangulos
*fecha 19-10-2021
*grupo 3CM17
*materia: compiladores
*/
class Simbolo {
	String nombre;
	public short tipo;
	double val;
	public String metodo;
	int defn;
	Simbolo sig;

	Simbolo(String s, short t, double d)
	{
		nombre=s;
		tipo=t;
		val=d;
	}
        public Simbolo obtenSig()
        {
		return sig;
	}
        public void ponSig(Simbolo s)
	{
		sig=s;
	}
        public String obtenNombre()
	{
		return nombre;
	}
}
