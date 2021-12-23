/* 
 * 
 * https://github.com/fckyasitclaw
 *
 * Desenvolva um software que leia um valor float informado pelo o usuário, com 6 casas após o ponto, e depois o imprima de modo normal
 e de modo formatado: limitado a apenas 2 casas após o ponto.
 */

#include <stdio.h>

int main()
{
    float value;

    printf("Informe um valor real (6 casas): ");
    scanf("%f",&value);
    printf("\tO valor informado foi: %f \n\te esse valor formatado e: %.2f. \n",value, value);

    return 0;
}
