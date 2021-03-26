#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void example();

int main() {
    // La variable strings le asignamos un buffer de 13 caracteres
    char string[13];
    printf("Ingresa tu frase: ");
    /*
    fgets(variable,13,stdin) function 
    fgets(variable,pila asignada a la variable,stdin(entrada por teclado(stdout salida))
    Se debe usar fgets ya que es seguro para la pila a diferencia de gets
    Gets excede la pila del buffer asignada lo cual puede conllevar a una grave vulnerabilidad
    */
    fgets(string,13,stdin);
    printf("%s\n\n",string);
    example();
    return 0;
}

void example() {
    // Compara dos cadenas de caracteres
    char c1[5];
    char c2[5];
    printf("Introduce la primera frase: ");
    fgets(c1,5,stdin);
    // fflush function
    // fflush limpia el buffer 
    fflush(stdin);
    printf("Introduce la segunda frase: ");
    fgets(c2,5,stdin);
    fflush(stdin);
    // strcmp sirve para comparar si dos strings son iguales
    if (strcmp(c1,c2) == 0) {
        printf("Los strings son iguales\n");
    }
    else {
        printf("Los strings no son iguales\n");
    }
}