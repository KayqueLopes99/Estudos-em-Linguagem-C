#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main()
{
    // Configura��o da localiza��o para suportar caracteres acentuados
    setlocale(LC_ALL, "Portuguese");

    // Declara��o de uma string e uma vari�vel inteira
    char s[N];
    int i;

    // Solicita ao usu�rio que digite um texto
    printf("Digite um texto:\n");

    // Obt�m a entrada do usu�rio usando gets (cuidado: gets � considerada insegura)
    gets(s);

    // Calcula o tamanho da string usando a fun��o strlen
    i = strlen(s);

    // Exibe o tamanho do texto inserido
    printf("\nTamanho do texto: %d\n\n", i);

    // Impress�o de posi��o a posi��o
    printf("Impress�o de posi��o a posi��o:\n");

    // Loop para percorrer a string e imprimir caractere por caractere
    for (i = 0; i < strlen(s); i++) {
        printf("%c", s[i]);
    }

    // Nova linha para melhor formata��o
    printf("\n");

    return 0;
}
