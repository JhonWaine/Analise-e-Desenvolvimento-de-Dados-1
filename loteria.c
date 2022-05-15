#include <stdio.h>
#include <stdlib.h>
int main()
{
 int n1,n2,n3; //quantidade que cada jogador vai apostar
 float nt,a1,a2,a3;//nota total e variavesis que recebem o novo valor
 float v;//valor do premio
 float i; // variavel auxiliar
   
   printf(" digite a quantidade que vc vai apostar:");
	scanf("%d",&n3);
   printf(" digite a quantidade que vc vai apostar:");
	scanf("%d",&n1);
   printf("digite a quantidade que vc vai apostar:");
	scanf("%d",&n2);
   printf(" digite o valor do premio:");
	scanf("%f",&v);
     nt=(n1+n2+n3);
     a1=(((float)n1/nt)* v); printf(" o apostador 1 vai receber:%.2f \n",a1);
     a2=(((float)n2/nt)* v); printf(" o apostador 2 vai receber:%.2f \n",a2);
     a3=(((float)n3/nt)* v); printf(" o apostador 3 vai receber:%.2f \n",a3);

 return 0;
}
// Todos os direitos resevados a Jhon Waine Mendes Gonçalves LTD