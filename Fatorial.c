/*Faça um programa que mostre o valor de 1!, 2!, 3!, até 10!. Utilize somente variáveis 
inteiras
Exemplo de saída:
<< Fatorial >>
1! = 1
2! = 2
3! = 6
4! = 24
5! = 120
6! = 720
7! = 5040
8! = 40320
9! = 362880
10! = 3628800 */

#include <stdio.h>

int main()
{
    int resultado;
    printf("<Fatorial>\n");
    for(int i = 1; i <= 10; i++){
        resultado = 1;
        for(int j = i; j >= 1; j--)
            resultado = resultado*j;
        printf("%d! = %d \n", i, resultado);
    }
    return 0;
}
// Todos os direitos resevados a Jhon Waine Mendes Gonçalves LTD
