// Escribir en un fichero de texto

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cambio(char x[]);

int main() {
    FILE *f;
    char x[20];
    f = fopen("/home/overflow/dinamyc","w");
    if (f == NULL) {
        printf("No se ha podido abrir el archivo");
        exit(1);
    }

    printf("Introduce algo para agregar al archivo: ");
    fgets(x,20,stdin);
    cambio(x);
    fflush(stdin);

    // fprintf() function is used for write information in the file,example:
    fprintf(f,"%s",x);
    fclose(f);
    return 0;
}

void cambio(char x[]) {
    int i;
    for (i = 0; i < 50; i++) {
        if (x[i] == '\n') {
            x[i] = '\0';
        }
    }
}