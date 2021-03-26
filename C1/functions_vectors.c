#include <stdio.h>
#include <stdlib.h>

void fun(int a[]);
void imprimir(int x[]);

int main() {
    // Vectores con funciones
    int v[2];
    // Function fun is for get valors of the user 
    fun(v);
    // Function imprimir for imprime the valors of the vector
    imprimir(v);
    return 0;
}
void fun(int a[]) {
    int i;
    for (i = 0; i < 2; i++) {
        printf("Ingresa los valores para el vector: ");
        scanf("%i",&a[i]);
    }
}
void imprimir(int x[]) {
    int i;
    for (i = 0; i < 2; i++) {
        printf("%i, ",x[i]);
    }
    printf("\n\n");
}