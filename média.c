/*
Calcular a média e o desvio padrão amostral de 5 números informados pelo usuário.
Média:
Desvio-padrão (amostral, normalizado por N-1

Exemplo de saída:
<< Média e desvio-padrão >>
Digite o valor 1: 50
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60
A média é 64 e o desvio-padrão é 11.4017542509914 */
#include <stdio.h>
#include <math.h>

const int  t = 5;  //quantitidade de termos da média

int main()
{
    float m,v=0;
    double dp;
    int n[t],d[t];

    for (int i = 0; i <t; i++)   // laço para fazer a leitura dos termos
    {
      printf("Digite um valor: ");
      scanf("%d", &n[i]);
      m=(m+n[i]);
    }
    m=(m/t);    //calculo da média
    
    for (int j = 0; j < t; j++)   //laço para calcular o desvio
    {
        if (n[j]>=m)
         d[j]=(n[j]- m);
        else  (n[j]<m);
         d[j]=( m-n[j]);   
    }
    for (int k = 0; k <t; k++) // laço para calcular a variancia
    {
        v=(v+(d[k]*d[k]));
    }
    v=(v/t);

    dp=sqrt(v);  //calculo do desvio padrão
    
    printf ("A média é %.1f e o devio padrão é %f",m,dp);
return 0;
} // Todos os direitos resevados a Jhon Waine Mendes Gonçalves LTD