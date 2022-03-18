/*
DATOS
*Mora Guzman Jose Antonio
*Proyecto compiladores
*Opcion LOGO
*fecha 12-dic-2021
*grupo 3CM17
*materia: compiladores
*/
import java.awt.Color;
import java.util.ArrayList;

public class CurrentState {

    ArrayList<Linea> lineas;
    double x;
    double y;
    int angulo;
    Color color;
    
    public CurrentState(){
        x = 0.0;
        y = 0.0;
        lineas = new ArrayList<Linea>(); 
        color = Color.WHITE;
    }
    
    public void agregarLinea(Linea linea){
        lineas.add(linea);
    }
    
    public void setPosicion(double x, double y){
        this.x = x;
        this.y = y;
    }
    
    public void limpiar(){
        lineas.clear();
    }

    public ArrayList<Linea> getLineas() {
        return lineas;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public int getAngulo() {
        return angulo;
    }

    public void setAngulo(int angulo) {
        this.angulo = angulo;
    } 

    public Color getColor() {
        return color;
    }

    public void setColor(Color color) {
        this.color = color;
    }

    @Override
    public String toString(){
        String valor = "";
        for(int i = 0; i < lineas.size(); i++)
            valor += lineas.get(i)+", ";
        valor += "x:"+x+" y:"+y+" angulo: "+angulo;
        return valor;
    }
    
}
