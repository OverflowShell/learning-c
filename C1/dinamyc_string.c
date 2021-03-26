// Crear una estructura que represente un libro usando los strings dinamicos
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct{
  int *nombre;
  int *autor;
}libro;

void cambio(char aux[100]);

int main() {

  char aux[50];
  libro lol;
  printf("Ingresa un nombre para el libro: ");
  fgets(aux,50,stdin);
  cambio(aux);
  // Asignando espacio dinámico para el string
  lol.nombre = (char*)malloc((strlen(aux)+1)*sizeof(char));
  if (lol.nombre == NULL) {
       printf("No se ha podido reservar memoria \n");
       exit(1);
  }
  strcpy(lol.nombre,aux);

  printf("Introduce un autor para el libro: ");
  fflush(stdin);
  fgets(aux,50,stdin);
  cambio(aux);
  lol.autor = (char*)malloc((strlen(aux)+1)*sizeof(char));
  if (lol.autor == NULL) {
	  printf("No se ha podido reservar memoria \n");
	  exit(1);
  }
  strcpy(lol.autor,aux);
  printf("%s \n",lol.nombre);
  printf("%s \n",lol.autor);

  // La función free libera espacio de la memoria dinámica
  free(lol.nombre);
  free(lol.autor);
  return 0;
}

void cambio(char aux[50]) {
  int i,temp = 0;
  for (i = 0; i < 100 && temp == 0; i++) {
	if (aux[i] == '\n') {
		aux[i] = '\0';
		temp = 1;
	}
  }
}
