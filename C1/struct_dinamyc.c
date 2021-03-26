// Hacer un ejemplo de batallas por turnos entre un heroe y varios malos,los malos se incrementaran en 1
//cuando un contador del turno de la batalla sea par 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct struct_dinamyc{
    int salud;
    int mana;
    int fuerza;
    int magia;
}heroe;

typedef struct struct_dinamyc{
    int salud;
    int fuerza;
}malo;

heroe yo;
malo *otros; // Vector dinamico

void introduceyo();
void introducemalo(int N);

int main() {
    
    int count = 0;
    int N = 0;
    introduceyo();
    asignamem(&N);
    // Me quede en el minuto 9:00
    return 0;
}

void introduceyo() {
    yo.salud = 1000;
    yo.mana = 100;
    yo.fuerza = 50;
    yo.magia = 100;
}

void introducemalo(int N) {
    otros[N].salud = 100;
    otros[N].fuerza = 50;
}

void asignamem(*N) {
    otros = (malo*)malloc((*N+1)*sizeof(malo));
    if (otros == NULL) {
        printf("No se ha podido reservar memoria \n");
        exit(1);
    }
    introducemalo(*N);
    (*N)++;
}