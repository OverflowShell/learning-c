#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int darnotas(notas not);

typedef struct{
    int matematicas;
    int comunicacion;
    int ingles;
}notas;

// notas not; // variable global se puede usar en cualquier funcion

int main() {
    
    notas not;

    darnotas(not);

    return 0;
}

int darnotas(notas not) {

    printf("Introduzca la nota de matematicas: ");
    scanf("%i",&not.matematicas);

    printf("Introduzca la nota de comunicacion: ");
    scanf("%i",&not.comunicacion);

    printf("Introduzca la nota de ingles: ");
    scanf("%i",&not.ingles);

    printf("La nota de matematicas es %i \n",not.matematicas);

}