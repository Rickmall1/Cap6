#include <stdio.h>

#define TAM 10


int main()
{
    //Quest 3 
    int cod_produto[TAM],estoque[TAM];
    
    //Preenchendo vetores:
    //OBS: Estou preenchendo estaticamente para ir direto ao ponto do algoritmo;
    for(int i = 0; i<TAM; i++){
        cod_produto[i] = i+1;
        estoque[i] = (i+1)*2;
    }
    
    int cod_cliente, cod_produto_cliente, qtd,flag=1;
    
    while(1){
        
        printf("\nDigite o codigo de cliente:\n>");
        scanf("%d, &cod_cliente");
        if(cod_cliente==0)
            break;
        
        printf("\nDigite o codigo do produto:\n>");
        scanf("%d, &cod_produto_cliente");
        for(int i = 0; i<TAM; i++){
         if(cod_produto_cliente==cod_produto[i])
             flag = 0; //Codigo do produto existe
    }
    if(flag != 0)
    {
        printf("\nCodigo inexistente.")
    }
        
        
    }
 
    
           
   return 0;
}