#include <stdio.h>
#include <locale.h>

// Fun��o para calcular o maior entre dois n�meros
float maior(float num1, float num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

// Fun��o principal
int main() {
    float x, y, m;

    // Configurando a localiza��o para suportar caracteres acentuados
    setlocale(LC_ALL, "Portuguese");

    // Solicitando ao usu�rio que insira dois valores
    printf("Insira um valor:\n");
    scanf("%f", &x);
    printf("Insira outro valor:\n");
    scanf("%f", &y);

    // Chamando a fun��o maior() para obter o maior valor
    m = maior(x, y);

    // Exibindo o maior valor com duas casas decimais
    printf("Maior: %.2f\n", m);

    return 0;
}
