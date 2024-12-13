#include <stdio.h>

#define TAM 7

int main()
{
    //Um programa que preencha um vetor com sete números inteiros;
    //Mostrar os numeros multiplos de 2,3; e mostrar os numeros multiplos de
    // 2 e 3;
    
    int vetor[TAM];
    
    for(int i = 0; i < TAM; i++){
        printf("\nInsira o numero:\n>");
        scanf("%d", &vetor[i]);
    }
    
    // Encontrando os multiplos de 2:
    printf("\nMultiplos de 2:\n");
    for(int i = 0; i < TAM; i++){
        if(vetor[i]%2 == 0){
            printf("%d ", vetor[i]);
        }
    }
    
    // Encontrando os multiplos de 3:
    printf("\nMultiplos de 3:\n");
    for(int i = 0; i < TAM; i++){
        if(vetor[i]%3 == 0){
            printf("%d ", vetor[i]);
        }
    }
    
    //Encontrando os numeros multiplos de 2 e de 3:
    printf("\nMultiplos de 2 e 3:\n");
    for(int i = 0; i < TAM; i++){
        if(vetor[i]%3 == 0 && vetor[i]%2==0){
            printf("%d ", vetor[i]);
        }
    }
    
   return 0;
}