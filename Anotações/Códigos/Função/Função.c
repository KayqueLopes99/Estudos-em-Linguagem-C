//Fa�a um progama que receba o sal�rio de um funcion�rio e o percentual
//de aumento, calcule e mostre o valor do aumento e novo sal�rio.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Biblioteca para caracteres acentuados

int main(int argc, char *argv[]){
	
	// Configurar a localidade para permitir a exibi��o de caracteres acentuados
	setlocale(LC_ALL, "Portuguese");

	float sal, perc, aumento, novo_sal;

	printf("Insira o sal�rio:\n");
	scanf("%f", &sal);

	printf("Insira o percentual:\n");
	scanf("%f", &perc);
	
	aumento = sal * perc / 100;
	novo_sal = sal + aumento;

	printf("Valor do aumento: %.2f.\n", aumento);
	printf("Valor do novo sal�rio: %.2f.\n", novo_sal);

	system("pause");
	return 0;
}
