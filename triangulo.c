// Faça um programa que realize o calculo da área de um triângulo com base nas coordenadas usando struct

#include <stdio.h>
#include <stdlib.h>

   struct ponto { // tipo do dado
    int x,y;
   }; // definição do dado
    struct retangulo {
        struct ponto inicio,fim;
    };    

int main(){
int a;
 struct retangulo r;

        printf("Leitura Das Coordenadas");
        printf("\n");
            printf("digite as coordenadas x,y do 1° ponto:");
            scanf("%d",&r.inicio.x);
            scanf("%d",&r.inicio.y);
            printf("digite as coordenadas x,y do 2° ponto:");
            scanf("%d",&r.fim.x);
            scanf("%d",&r.fim.y);
       a=(r.inicio.x-r.fim.x)*(r.inicio.y-r.fim.y);
   
    printf("a área do triângulo é: %d²",a);
    return 0;
}
// Todos os direitos resevados a Jhon Waine Mendes Gonçalves LTD