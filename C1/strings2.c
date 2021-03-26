#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cambio(char c1[]);
void longitud(char c1[]);

int main() {
    // Acceder a un elemento de un string
    char c1[10];
    printf("Introduzca una frase: ");
    fgets(c1,10,stdin);
    fflush(stdin);
    cambio(c1);
    longitud(c1);
    printf("%s\n",c1);
    return 0;
}

void cambio(char c1[]) {
    // Cambiar el \n al final del string que debido a la func fgets() existe
    // Todos los strings terminan en \0 y vamos a hacer esto aqui forzando al string con un for e if
    int i;
    for(i = 0; i < 10; i++) {
        if (c1[i] == '\n') {
            c1[i] = '\0';
            printf("Cambiado con exito\n");
        }
    }
}

void longitud(char c1[]) {
    // Ver la longitud de un string
    int len;
    int i;
    len = strlen(c1);
    for(i = 0; i < len; i++) {
        if(c1[i] == 'a') {
            c1[i] = ' ';
        }
    }
}