/* 
 * 
 * https://github.com/fckyasitclaw
 *
 * Implemente um aplicativo que leia dois números inteiros e, em seguida, imprima-os na
 * ordem inversa em que foram lidos. 
 */
 
 #include <stdio.h>

int main()
{
    int value1, value2;

    printf("Informe o primeiro valor: ");
    scanf("%i",&value1);
    printf("Informe o segundo valor: ");
    scanf("%i",&value2);
    printf("\tA ordem inversa e: %i, %i. \n",value2,value1);

    return 0;
}
