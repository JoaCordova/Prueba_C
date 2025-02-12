#include <stdio.h>

int main() {
    // Declarar una variable para almacenar el nombre
    char nombre[50];  // Asignamos un tamaño de 50 caracteres, ajustable según necesidad

    // Pedir al usuario que ingrese su nombre
    printf("¿Cuál es tu nombre? ");

    // Leer la entrada del usuario
    scanf("%s", nombre);  // Guardar el nombre en la variable 'nombre'

    // Imprimir un saludo personalizado
    printf("¡Hola, %s!\n", nombre);

    return 0;
}
