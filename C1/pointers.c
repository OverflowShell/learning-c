#include <stdio.h>
#include <stdlib.h>

void cambio(int *a, int *b);

int main() {
    // Cuando utilizamos & en una variable lo que hacemos es la direccion de memoria a donde meteremos lo que pongamos por pantalla
    // Cuando se usa * (pointer/puntero) se indica el valor que hay en la direccion asignada "*x"
    int x, *y;
    // Example 1
    x = 4;
    y = &x;
    printf("El valor de *y es %i: ",*y);
    // Example 2
    int z;
    z = 10;
    // Creamos una funcion para cambiar los valores de x y z
    cambio(&x,&z);
    printf("El valor actual de x es %i y el valor actual de z es %i \n\n",x,z);
    return 0;
}
void cambio(int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;

}