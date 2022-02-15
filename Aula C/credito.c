#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long cartao = get_long("Digite o número do cartão sem -: ");
    if (cartao < 999999999999 || cartao > 9999999999999999)
    {
        printf("Número invalido\n");
    }
    else
    {
        // Aplicando o algoritimo de Luhn
        // Separando os numeros em pares do penultino para o começo, multiplicando por 2,
        // dividindo os que deram resultados acima de 9 em seus digitos e somando tudo.

        long cartao_num_a = cartao;
        long cartao_num_b = cartao;
        int verificacao;

        int verificacao_passo_1 = 0;
        do
        {
            int num_par_rev = cartao_num_a % 100 / 10;
            if (num_par_rev * 2 < 10)
            {
                num_par_rev = num_par_rev * 2;
            }
            else
            {
                num_par_rev = num_par_rev * 2;
                num_par_rev = num_par_rev / 10 + num_par_rev % 10;
            }
            verificacao_passo_1 = verificacao_passo_1 + num_par_rev;
            cartao_num_a = cartao_num_a / 100;
        }
        while(cartao_num_a > 0);

        // Somando os numeros restantes

        int verificacao_passo_2 = cartao_num_b % 10;
        long i = cartao_num_b / 10;
        do
        {
            int num_rest = i % 100 / 10;
            verificacao_passo_2 = verificacao_passo_2 + num_rest;
            i = i /100;
        }
        while (i > 0);

        // Somando os dois passos do algoritimo e dividindo por 10. Valido é só o número que o resto for zero.

        verificacao = verificacao_passo_1 + verificacao_passo_2;

        long primeiro_n = cartao;
        do
        {
            primeiro_n = primeiro_n / 10;
        }
        while (primeiro_n > 100);

        if (verificacao % 10 == 0)
        {

            // Definindo qual a bandeira do cartão
            if (primeiro_n == 34 || primeiro_n == 37)
            {
                printf("America Express\n");
            }
            else if (primeiro_n >= 40 && primeiro_n <= 49)
            {
                printf("Visa\n");
            }
            else if (primeiro_n >= 51 && primeiro_n <= 55)
            {
                printf("MasterCard\n");
            }
            else
            {
                printf("Bandeira desconhecida\n");
            }
        }
        else
        {
            printf("Cartão invalido\n");
        }
    }
}
