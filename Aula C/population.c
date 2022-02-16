#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int valor_inicial;
    int valor_final;
    int ano;

    // Pedir os valores para o usuário.
    do
    {
        valor_inicial = get_int("Entre com a quantidade inicial de lhamas: ");
    }
    while(valor_inicial < 9);

    do
    {
        valor_final = get_int("Entre com a quantidade final de lhamas: ");
    }
    while(valor_final < valor_inicial);

    // Calculando a taxa de cresimento.
    for(ano = 0; valor_inicial < valor_final; ano++)
    {
        valor_inicial = valor_inicial + (valor_inicial / 3) - (valor_inicial / 4);
    }
    printf("Years: %i\n", ano);
}
