#include <stdio.h>
#include <stdlib.h>

int main() {
    // Array/vector
    int v[] = {1,2,3,4,5};
    // Imprimir el lugar 0 del array/vector
    printf("El valor de la pocicion 0 es %i \n\n",v[0]);


    // Imprimir todos los valores del array con un for
    int i;
    // Creamos la variable i y le definimos un valor de 0 para que no aumente los valores del array
    // i < 5 debido a que hay 5 pociciones en el array
    for (i = 0; i < 5; i++) {
        printf("%i, ",v[i]);
    }
    return 0;
}