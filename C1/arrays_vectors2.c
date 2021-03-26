#include <stdio.h>
#include <stdlib.h>

int main() {
    // Ingresar por pantalla numeros al vector
    int v[10];
    int i;
    // Creamos la variable i 
    for (i = 0; i < 10; i++) {
        // En el bucle usaremos el mismo procedimiento de pedir los valor para el array
        printf("Ingresa los valores para el vector %i: ",i);
        // Recogemos todos los valores con el &v[i]
        scanf("%i",&v[i]);
    }
    // Creamos un bucle for para imprimir todos los valores del array
    for (i = 0; i < 10; i++) {
        printf("%i, ",v[i]);
    }
    
    return 0;
}