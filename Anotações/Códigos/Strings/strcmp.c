#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main()
{
    // Configura��o da localiza��o para suportar caracteres acentuados
    setlocale(LC_ALL, "Portuguese");

    char hardText[N] = {"/exit"};  // Definindo uma string predefinida
    char senha_usr[N];  // Vari�vel para armazenar o texto digitado pelo usu�rio
    int ok;  // Vari�vel para armazenar o resultado da compara��o de strings

    printf("Digite um texto:\n");
    gets(senha_usr);  // Obtendo o texto do usu�rio (cuidado: gets � considerada insegura)

    ok = strcmp(hardText, senha_usr);  // Comparando as strings

    if(ok == 0)
        printf("Texto iguais.\n");  // Se as strings forem iguais
    else 
        printf("Textos diferentes");  // Se as strings forem diferentes
}
