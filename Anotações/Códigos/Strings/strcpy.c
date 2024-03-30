#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main() {
    // Configura��o da localiza��o para suportar caracteres acentuados
    setlocale(LC_ALL, "Portuguese");

    // Defini��o de strings origem e destino
    char origem[N] = {"Pok�mon one!"};
    char destino[N];

    // Exibi��o das strings origem e destino antes da c�pia
    printf("Antes do strcpy:\n");
    puts(origem);  // Exibe a string origem
    puts(destino); // Exibe a string destino (que ainda n�o foi inicializada)

    // C�pia da string origem para a string destino usando strcpy
    strcpy(destino, origem);

    // Exibi��o das strings origem e destino ap�s a c�pia
    printf("Depois do strcpy:\n");
    puts(origem);  // A string origem permanece inalterada
    puts(destino); // A string destino agora cont�m uma c�pia da string origem

    return 0;
}
