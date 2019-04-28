// Sintaxe:
//     printf(“formato”, argumentos);

// Formatos básicos
// %d -> Inteiros
// %f -> Ponto flutuante, notação decimal
// %c -> Caracteres

#include <stdio.h>
#include <stdlib.h>

void main(){

    // Simples. Obs: '\n' -> Nova linha.
    printf("Olá, mundo!\n"); // Resultado : "Olá, mundo!"
    
    int idade = 16;
    printf("Eu tenho %d anos!\n", idade); // Resultado: "Eu tenho 16 anos!"
    
    int numero_sorte = 567;
    printf("Número da sorte : %d\n", numero_sorte); // Resultado : "Número da sorte : 567"

    int num1 = 10, num2 = 9, soma;
    soma = num1 + num2;    
    printf("Soma: %d + %d = %d\n", num1, num2, soma); // Resultado : "Soma: 10 + 9 = 19"

    char sexo = 'M';
    printf("Sexo : %c\n", sexo); // Resultado : "Sexo : M"

    float salario = 400000.00;
    printf("Salario : %f\n", salario); // Resultado : "Salario : 400000.000000"
    /**
     * Podemos limitar o numero de casas decimais da seguinte forma, basta modificar o formato
     * % + numero_casas_decimas + f
     * Exemplo numero_casas_decimas = 2
     * Obs: Essas mudancas tambem podem ser aplicadas no tipo 'double'
     */
    printf("Salario : %.2f\n", salario); // Resultado : "Salario : 400000.00"
    // Exemplo numero_casas_decimas = 3     
    printf("Salario : %.3f\n", salario); // Resultado : "Salario : 400000.000"
}