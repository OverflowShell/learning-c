#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void aleatorio(int *vector, int N);

int main() {
    int N = 10;
    int *vector;
    int i,j,k;
    // Si tiene solo un puntero no debemos de agregar el puntero 
    // example int **vector;
    // *vector = (code) en este ejemplo tiene dos punteros asi que ponemos 1 en la asignacion
    vector = (int *)malloc(N*sizeof(int)); //malloc lo que hace es asignar un tamaño al vector
    // En el int despues de sizeof se aplica el mismo procedimientp que en la linea 13
    if (vector == NULL) {
       // Condicional por si nuestro ordenador no tiene la cantidad de ram o swap necesaria
        printf("No se ha podido reservar espacio de memoria \n");
    }
    else {
        aleatorio(vector,N);
        for (i= 0; i < N; i++) {
            j = i+1;
            while (j < N) {
                if (*(vector+i) == *(vector+j)) {
                    for (k = j; k+1<N; k++) {
                        *(vector+k) = *(vector+k+1); 
                    }
                    N--;
                }
                else {
                    j++;
                }
            }
            
        }
        vector = (int*)realloc(vector,N*sizeof(int)); // realloc redimensiona el vector conservando sus valores
        if (vector == NULL) {
            printf("No se ha podido reservar espacio de memoria \n");
        }
        else {
            for (i = 0; i < N; i++) {
                printf("%i, ",*(vector+i));
            }
            printf("\n");
        }
    }
    return 0;
}

void aleatorio(int *vector, int N) {
    int i;
    srand(time(NULL));
    
    for (i= 0; i < N; i++) {
        *(vector+i) = rand() % 3;
        printf("%i, ",*(vector+i));
    }
    printf("\n");
}