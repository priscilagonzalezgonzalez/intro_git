#include <stdio.h>

int main(){
    char nombre[50];
    unsigned int edad;

    printf("Hello world!\n");
    printf("Nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s", nombre);
    printf("Edad: ");
    scanf("%u", &edad);
    printf("Vas a cumplir %u", edad + 1);

    return 0;
}