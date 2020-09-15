#include <stdio.h>

int main(){
    char nombre[40];

    printf("Hello world!\n");
    printf("Nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s", nombre);

    return 0;
}