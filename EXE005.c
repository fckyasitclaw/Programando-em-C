/* 
 * 
 * https://github.com/fckyasitclaw
 *
 * Escreva um programa que leia três variáveis: char, int e float (limitada a 2 casas).
 * Em seguida, imprima-as de três maneiras diferentes:
 * 1. Separadas por espaço;
 * 2. Por tabulação;
 * 3. Uma em cada linha
 * Use um único comando printf() para cada operação de escrita das 3 variáveis.
 */
 
 #include <stdio.h>

int main()
{
    char letter;
    int number;
    float number2;

    printf("Informe o CHAR: ");
    scanf("%c",&letter);
    printf("Informe o INT: ");
    scanf("%i",&number);
    printf("Por fim, o FLOAT: ");
    scanf("%f",&number2);

    printf("\n1) ESPACOS: %c %i %.2f \n",letter,number,number2);
    printf("2) TABULACAO: %c \t %i \t %.2f\n",letter,number,number2);
    printf("3) PULO DE LINHA: \n%c\n%i\n%.2f\n",letter,number,number2);

    return 0;
}
