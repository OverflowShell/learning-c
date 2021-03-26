#include <stdio.h>
#include <stdlib.h>
/*
Aqui veremos la memoria dinamica (dinamyc memory) ya que hasta este momento
hemos estado utilizando la memoria estatica (static memory)
El problema de la memoria estatica es que no podemos volver a darle valor a un vector
ademas de que desaprovecha espacio y es mas vulnerable a meterse con espacios de memoria
donde no deberia
*/
int main() {
    // Dinamyc Memory
    int i;
    int N;
    // Con la memoria dinamica siempre se deben utilizar punteros
    int *vector;
    
    printf("Dame un valor para N: ");
    scanf("%i",&N);

    vector = (int*)malloc(N*sizeof(int));
    if (vector == NULL) {
        printf("No se ha podido reservar memoria");
    }
    else {
        for (i = 0; i < N; i++) {
            *(vector + i) = i;
        }
        for (i = 0; i < N; i++) {
            printf("%i, ",*(vector + i));
        }
    }
    printf("\n");

    // Vamos a pedir que redomensione el valor para N
    // Esto con la memoria estatica no podria hacerse pero con la dimanica si
    printf("Dame un valor para N: ");
    scanf("%i",&N);
    vector = (int*)malloc(N*sizeof(int));

    if (vector == NULL) {
        printf("No se ha podido reservar memoria");
    }
    else {
        for (i = 0; i < N; i++) {
            *(vector + i) = i;
        }
        for (i = 0; i < N; i++) {
            printf("%i, ",*(vector + i));
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}