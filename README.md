# Cauculadora-Somar-Dois-NumerosEste é um projeto simples desenvolvido em **C** que tem como objetivo realizar a **soma de dois números** informados pelo usuário.

É um exercício fundamental focado na aplicação dos conceitos básicos de programação, como:
* Estrutura básica de um programa em C.
* Declaração e uso de variáveis (`float`).
* Definição e chamada de funções (`cabecalho`).
* Funções de entrada e saída de dados (`scanf` e `printf`).

## 🧠 Objetivos de Aprendizagem

* Compreender a estrutura principal de um código C.
* Utilizar funções para modularizar o código (ex: `cabecalho()`).
* Realizar a entrada e a saída de dados numéricos.
* Aplicar o operador de soma (`+`).
* Configurar o ambiente para suporte a caracteres especiais (UTF-8) com `setlocale`.

---

## ⚙️ Tecnologias Utilizadas

* **Linguagem:** C
* **Bibliotecas padrão:** `stdio.h` (implícita, mas essencial), `math.h`, `stdlib.h`, `locale.h`
* **Codificação:** UTF-8
* **Compatibilidade:** Windows, Linux e macOS

---

## 💻 Código-Fonte (`soma.c`)

```c
#include <stdio.h>    // Essencial para printf e scanf
#include <math.h>     // Incluído, mas não utilizado (pode ser removido)
#include <stdlib.h>   // Incluído, mas não utilizado (pode ser removido)
#include <locale.h>

// Função de cabeçalho do programa
void cabecalho() {
    printf("=====================================\n");
    printf("     OLÁ! SEJA BEM-VINDO À CALCULADORA SOMA\n");
    printf("=====================================\n\n");
    printf("O uso é simples: os valores digitados serão o número 1 e o número 2,\n");
    printf("e logo em seguida o programa exibirá a soma entre eles.\n\n");
}

int main() {
    
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Suporte a caracteres UTF-8

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
🧩 Exemplo de Execução
=====================================
     OLÁ! SEJA BEM-VINDO À CALCULADORA SOMA
=====================================

O uso é simples: os valores digitados serão o número 1 e o número 2,
e logo em seguida o programa exibirá a soma entre eles.

Digite o primeiro número: 10.5
Digite o segundo número: 5.2

---------------------------
O resultado é: 15.70
---------------------------
📦 Como Compilar e Executar
Salve o código em um arquivo chamado soma.c.

Abra o terminal/prompt de comando na pasta do projeto.

Compile o código usando o compilador GCC:

Bash

gcc soma.c -o soma
Execute o programa gerado:

Bash

./soma
📜 Licença
Este projeto é de código aberto e está disponível para uso e estudo. Sinta-se à vontade para clonar, modificar e aprimorar o código.
