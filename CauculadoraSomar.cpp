
#include <math.h>
#include <stdlib.h>
#include <locale.h>

// Função de cabeçalho do programa
void cabecalho() {
    printf("=====================================\n");
    printf("   OLÁ! SEJA BEM-VINDO À CALCULADORA SOMA\n");
    printf("=====================================\n\n");
    printf("O uso é simples: os valores digitados serão o número 1 e o número 2,\n");
    printf("e logo em seguida o programa exibirá a soma entre eles.\n\n");
}

int main() {
	
 setlocale(LC_ALL, "pt_BR.UTF-8");

	
    float numero1, numero2, resultado;

    cabecalho();

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    resultado = numero1 + numero2;

    printf("\n---------------------------\n");
    printf("O resultado é: %.2f\n", resultado);
    printf("---------------------------\n");

    return 0;
}

