/*
DATOS
*Mora Guzman Jose Antonio
*Practica 2 Java para modo grafico
*Opcion Circulos Lineas y Rectangulos
*fecha 19-10-2021
*grupo 3CM17
*materia: compiladores
*/
import java.awt.*;

public class Circulo implements Dibujable {
	private int x=0;
	private int y=0;
	private int r=0;

	public Circulo(int x, int y, int r)
	{
		this.x=x;
		this.y=y;
		this.r=r;
	}

	public void dibuja(Graphics g){
		g.drawOval(x,y,r,r);
	}
}


