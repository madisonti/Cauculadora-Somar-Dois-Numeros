
#include <math.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o de cabe�alho do programa
void cabecalho() {
    printf("=====================================\n");
    printf("   OL�! SEJA BEM-VINDO � CALCULADORA SOMA\n");
    printf("=====================================\n\n");
    printf("O uso � simples: os valores digitados ser�o o n�mero 1 e o n�mero 2,\n");
    printf("e logo em seguida o programa exibir� a soma entre eles.\n\n");
}

int main() {
	
 setlocale(LC_ALL, "pt_BR.UTF-8");

	
    float numero1, numero2, resultado;

    cabecalho();

    printf("Digite o primeiro n�mero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo n�mero: ");
    scanf("%f", &numero2);

    resultado = numero1 + numero2;

    printf("\n---------------------------\n");
    printf("O resultado �: %.2f\n", resultado);
    printf("---------------------------\n");

    return 0;
}

