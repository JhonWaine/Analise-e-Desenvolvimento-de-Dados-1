//lista execicio 3

/*Faça um conversor de número binário para decimal (inteiro). O número deve ter 4 bits, 
sendo o bit mais significativo digitado primeiro. Mostrar na resposta o número binário e o 
número decimal.
Exemplo de saída:
== Conversor de números binários ==
Digite o 1o. bit: 1
Digite o 2o. bit: 0
Digite o 3o. bit: 1
Digite o 4o. bit: 1
O número binário 1011 corresponde ao número decimal 11 */

#include <stdio.h>
#include <math.h>

int main()
{   //número e m binário a ser digitado pelo usuario, de 4 bits
    int n1,n2,n3,n4,d;

    printf("digite um número de 4 bits em binário:\n");
    scanf("%d",&n1);scanf("%d",&n2);scanf("%d",&n3);scanf("%d",&n4); //
    
    d=(pow(2,3)*n1)+(pow(2,2)*n2)+(pow(2,1)*n3)+(pow(2,0)*n4);
    
    printf ("o número binario:%d%d%d%d",n1,n2,n3,n4);
    printf (" corresponde ao número decimal:%d",d);
    return 0;
}
// Todos os direitos resevados a Jhon Waine Mendes Gonçalves LTD