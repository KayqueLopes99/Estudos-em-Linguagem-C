#include <stdio.h>
#include <string.h>

int main() {
    // Lista de Pok�mon
    char listaPokemon[] = "Bulbasaur Charmander Pikachu Squirtle";

    // Pok�mon que queremos verificar
    char pokemonBuscado[] = "Pikachu";

    // Verifica se o Pok�mon est� na lista
    char *resultado = strstr(listaPokemon, pokemonBuscado);

    if (resultado != NULL) {
        printf("Encontrou o Pok�mon: %s\n", resultado);
    } else {
        printf("N�o encontrou o Pok�mon.\n");
    }

    return 0;
}
