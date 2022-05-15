/* EX4 IMC

Faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificação de acordo 
com a tabela abaixo
𝐼𝑀𝐶 = 𝑚𝑎𝑠𝑠𝑎 (𝑘𝑔)/𝑎𝑙𝑡𝑢𝑟𝑎(𝑚)²   */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float p,a,imc; //peso, altura e imc  
    
    printf(" digite o seu peso em kg:");
    scanf("%f",&p);
    printf(" digite a sua altura:");
    scanf("%f",&a);

    imc=(p/(a*a));

    printf(" imc:%.2f\n",imc);

     if (imc<18.5)
        printf(" magreza\n");
     else if (imc<25.0)
        printf(" saudável\n"); 
     else if (imc<30.0)
        printf(" sobrepeso\n"); 
     else if (imc<35.0)     
        printf(" Obesidade Grau 1\n"); 
     else if (imc<40.0)
      printf(" Obesidade GRAU 2 (severa)\n"); 
     else 
      printf(" Obesidade Grau 3 (morbida)\n");
 return 0;
}
// Todos os direitos resevados a Jhon Waine Mendes Gonçalves LTD