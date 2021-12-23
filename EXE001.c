/* 
 * 
 * https://github.com/fckyasitclaw
 *
 * Elabore um programa que solicite ao usuário que ele entre com o valor do dia, mês e ano (inteiros). Para, em seguida, imprimir os valores lidos, organizados e separados
 por uma barra (/).
 */
 
 
 #include <stdio.h> //

int main()
{
    int day, month, year;

    printf("Por favor, informe o dia: [Formato: DD] - ");
    scanf("%i", &day);
    printf("Agora informe o mes: [Formato: MM] - ");
    scanf("%i",&month);
    printf("Por fim, informe o ano: [Formato: AAAA] - ");
    scanf("%i",&year);

    printf("\tA data inserida, foi: %i/%i/%i\n",day,month,year);

    return 0;
}
