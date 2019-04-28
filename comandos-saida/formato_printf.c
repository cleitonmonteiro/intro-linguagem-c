#include <stdio.h>
// --> Modificações no formato
/*
    -> % [tam].[qtd_dig]d

    -> tam – Indica o tamanho mínimo que deve ser colocado na saída caso o
    número possua quantidade menor de dígitos. Se o número possuir
    quantidade de dígitos maior que o valor, o número não será truncado
    -> qtd_dig – Quantidade de dígitos que deve ser mostrada. Caso o núme-
    ro possua quantidade menor que o indicado, serão colocados zeros à
    esquerda até se completar o tamanho indicado.
*/


/*
    -> % [tam].[casa_dec]f

    -> tam – É o mesmo que o descrito antes para os números inteiros. Vale
    completar que, neste tamanho, estão consideradas as casas decimais
    inclusive.
    -> casa_dec – Número de casas decimais que devem ser mostradas. Caso o
    número possua número menor de decimais, o número será completado
    com zeros até o tamanho indicado. Se o número possuir um número de
    casas decimais maior que o indicado, a saída será truncada para o ta-
    manho indicado.
*/

void main (void) {
    // Exemplos:
    printf ("|%8.6d|\n", 820); // Resultado: "|  000820|"
    printf ("|%10d|\n", 820);  // Resultado: "|       820|"
    printf ("|%.8d|\n", 820);  // Resultado: "|00000820|"
    printf ("|%08d|\n", 820);  // Resultado: "|00000820|"

    printf ("|%2.2f|\n", 1223.4432);  // Resultado: "|1223.44|"
    printf ("|%10.2f|\n", 1223.4432); // Resultado: "|   1223.44|"
    printf ("|%20f|\n", 1223.4432);   // Resultado: "|         1223.443200|"
    printf ("|%.2f|\n", 1223.4432);   // Resultado: "|1223.44|"

}