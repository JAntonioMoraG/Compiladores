/*
DATOS
*Mora Guzman Jose Antonio
*Proyecto compiladores
*Opcion LOGO
*fecha 12-dic-2021
*grupo 3CM17
*materia: compiladores
*/
public class SymbolData {

    private String nombre;
    private Object objeto;

    public SymbolData(String nombre, Object objeto){
        this.nombre = nombre;
        this.objeto = objeto;
    }
    
    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public Object getObjeto() {
        return objeto;
    }

    public void setObjeto(Object objeto) {
        this.objeto = objeto;
    }
        
}
