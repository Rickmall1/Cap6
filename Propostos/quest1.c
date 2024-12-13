#include <stdio.h>

// Questão 1

int main()
{
    //Preencher um vetor com seis elementos numericos. Calcular e mostrar:
    // todos os numeros pares; quantidade de numeros pares; todos os impares; e qtd de impares;
    
    int vetorNum[6], contador=0;
    
    for(int i = 0 ; i<6; i++){
        printf("\nInsira o numero:\n>");
        scanf("%d", &vetorNum[i]);
    }
    
    //Imprimindo os numeros impares 
    for(int i = 0 ; i<6; i++){
        if(vetorNum[i]%2 != 0){
         printf("%d ", vetorNum[i]);
         contador++;
        }
     }
     
    printf("\n\nTotal de numeros impares: %d\n", contador);
    
    //Resetando contador;
    contador = 0;
    
    //Imprimindo os numeros pares
    for(int i = 0 ; i<6; i++){
        if(vetorNum[i]%2 == 0){
         printf("%d ", vetorNum[i]);
         contador++;
        }
     }
    printf("\nNumero de numeros pares: %d", contador);
 
   return 0;
}