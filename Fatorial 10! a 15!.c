/*
Altere o programa anterior para calcular de 10! até 15!. É esperado que ocorra um erro. 
Explique o motivo do erro e qual a solução.
Exemplo de saída:
<< Fatorial >>
11 ! = 39 916 800
12 ! = 479 001 600
13 ! = 6 227 020 800
14 ! = 87 178 291 200
15 ! = 1 307 674 368 000
*/
#include<stdio.h>
int main()
{
    int resultado;
    printf("<Fatorial>\n");
    for(int i = 11; i <= 15; i++){
        resultado = 1;
        for(int j = i; j >= 1; j--)
            resultado = resultado*j;
    printf("%d! = %d \n", i, resultado);
    }
    return 0;
} // O problema é que uma váriavel do tipo int não comporta números muito grandes tais como menores q -2147483647 e maiores q 2147483647 acaretando (overflow)
// Uma possível solução seria ao invés de declarar int, declarar dobule.

// segue o code consertado 

/*
#include <stdio.h>
int main()

{
    double resultado;
    printf("<Fatorial>\n");
    for(int i = 11; i <= 15; i++){
        resultado = 1;
        for(int j = i; j >= 1; j--)
            resultado = resultado*j;
    printf("%d! = %.0f \n", i, resultado);
    }
    return 0;
}
*/
// Todos os direitos resevados a Jhon Waine Mendes Gonçalves LTD
