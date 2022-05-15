/*
Escreva um programa que leia um número inteiro positivo n e em seguida imprima n linhas 
do chamado Triangulo de Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21

*/
#include <stdio.h>

int main()
{
 int n=0,i,j,a1=1;
    
 printf("digite a quantidade de linhas q precisa:");
 scanf("%d",&n); 

 for (i=1;i<=n;i++){
  for(j=1;j<=i;j++){
   printf("%d ",a1);
   a1=a1+1;}
   printf("\n");}
return 0;
}
// Todos os direitos resevados a Jhon Waine Mendes Gonçalves LTD