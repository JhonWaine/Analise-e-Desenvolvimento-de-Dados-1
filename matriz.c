
/* 
Faça um algoritmo que lê uma matriz 6x6 e soma os valores das partes hachuradas. Escreva 
a matriz e a soma das partes calculadas.

*/
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    printf("matriz 6x6:\n");
    int matriz [6][6],soma;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            matriz[i][j] = rand()%10;
            //printf("digite um numero: ");
            //scanf("%d", &matriz[i][j]);
        }
        
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
          printf("%d\t", matriz[i][j]);
        }       
        printf("\n");
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
           if (matriz[1][]])
           {
               /* code */
           }
           
        }       
    }



 return 0;
}
// Todos os direitos resevados a Jhon Waine Mendes Gonçalves LTD
