/* 
 * 
 * https://github.com/fckyasitclaw
 *
 * Codifique uma aplicação que pergunte o nome do cliente, sua idade e seu peso. Ao final,
 * apresente uma mensagem: processando e, de forma organizada, mostre uma mensagem
 * de boas-vindas apresentando os dados lidos e armazenados na memória.
 */
 
 #include <stdio.h>

int main()
{
    char name[20];
    int age;
    float weight;

    printf("Informe o nome do cliente: ");
    scanf("%s",&name);
    printf("Informe sua idade: ");
    scanf("%i",&age);
    printf("Por fim, seu peso: ");
    scanf("%f",&weight);

    printf("------------ PROCESSANDO ------------\n");
    printf("\tMuito prazer, %s. Voce tem %i anos e pesa %.1f kg. Correto? \n",name,age,weight);

    return 0;

}
