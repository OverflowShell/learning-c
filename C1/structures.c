#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Una estructura sirve para agrupar distintos tipos de variables
typedef struct{
    int paginas;
    char nombre[50];
    float precio;

}libro;

int main() {
    // Debemos de crear una variable la cual alberguara a nuestra estructura llamada libro
    libro variable, otherxd;
    // Las variables dentro de la estructura pueden ser llamadas de esta forma similar a python
    variable.paginas = 40;
    printf("Este libro tiene %i paginas ",variable.paginas);
    // En casos de utilizar variables de tipo char (string) se debe de llamar usando strcpy();
    strcpy(variable.nombre, "Hamlet");
    printf("\nEste libro se llama %s ",variable.nombre);
    variable.precio = 30.4;
    printf("\nEl precio del libro es %f ",variable.precio);
    // Tambien podemos asignarle infinidad de valores usando otras variables de la estructura
    otherxd.paginas = 60;
    otherxd.precio = 60.6;
    strcpy(otherxd.nombre, "La tempestad");
    printf("\nEste libro tiene %i paginas ",otherxd.paginas);
    printf("\nEste libro se llama %s ",otherxd.nombre);
    printf("\nEl precio del libro es %f ",otherxd.precio);

    /*
    Ahora vamos a crear una nueva variable a la estructura libro y vamos a pasarle un buffer de 10
    valores igual que fuera un vector con esto estaremos creando 10 variables de cada una de las 
    variables de la estructura con un bucle for podremos iterar sobre ellas en este ejemplo
    le daremos un valor a cada una de las 10 variables que son precio
    */ 
    libro si[10];
    int i;
    for (i = 0; i < 10; i++) {
        si[i].precio = 25 + i;
        printf("\nEl precio de la estructura es %i es de %f ",i+1,si[i].precio);
    }
    return 0;
}