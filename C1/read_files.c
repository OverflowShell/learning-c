// Funciones de lecturas de un fichero .txt

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char aux;
    char aux2[100];
    FILE *f;
    f = fopen("/home/overflow/dinamyc.c","r");
    if (f == NULL) {
        printf("No se ha podido abrir el archivo");
        exit(1);
    }
    while (aux != EOF) { // EOF es el final del fichero
        aux = fgetc(f); // fgetc lee cada caracter uno por uno
        printf("%c",aux); 
    }
    printf("\n");
    fclose(f); // Cerrar el fichero
    
    f = fopen("/home/overflow/dinamyc.c","r");
    if (f == NULL) {
        printf("No se ha podido abrir el archivo");
        exit(1);
    }
    while (!feof(f)) {
        fgets(aux2,100,f);
        printf("%s",aux2);
    }
    printf("\n");
    fclose(f);
    
    return 0;
}