// Sintaxe:
//     scanf(“formato”, endereços_argumentos);

// Formatos básicos
// %d -> Inteiros
// %f -> Ponto flutuante, notação decimal
// %c -> Caracteres

#include <stdio.h>
#include <stdlib.h>

void main(){

    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade); // Esta linha pausa a execução e espera receber algo do teclado
    printf("Você informou %d como sua idade.\n", idade);
    int     a;
    float   b;

    printf("Informe um número inteiro seguido de um real: ");
    scanf ("%d %f", &a, &b); // Observe o & para recuperar o endereço das variaveis
    /*  Caso voce digite : "10 20.0"
        a = 10 e b = 20.0
    */
    printf ("Inteiro %d\n", a);   // Inteiro 10
    printf ("Real    %.2f\n", b); // Real    20.00

}