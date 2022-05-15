/*
Faça um programa que leia o nome de uma pessoa e mostre esse nome em caixa alta (pense 
como fazer isso olhando a diferença entre os valores dos caracteres minúsculos e maiúsculos 
na tabela ASCII). Não usar as funções de string.h
Exemplo de saída:
<< Vetor de char>>
Digite um nome: Bruno
O nome digitado é: BRUNO
*/
#include <stdio.h>

int main()
{
    char nome[25];
    
    printf("Digite um nome: ");
    fgets(nome,25,stdin);  //fazer a leitura do teclado com "espaço"

    for (int i = 0;nome[i]; i++){
        if (123 > nome[i] && nome[i] > 96) // condição para pegar apenas letras
           nome[i]=(nome[i]-32); 
    }
    printf("O nome digitado é:");
    puts  (nome);
    
    /*    forma alternativa
    for (int j = 0; j <25; j++)
     printf("%c",nome[j]);
    */
    
    return 0;
}
// Todos os direitos resevados a Jhon Waine Mendes Gonçalves LTD
