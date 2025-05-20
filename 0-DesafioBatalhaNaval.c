#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main(){

    int matriz[LINHA][COLUNA];
    int target = 67;
    int found = 0;
    int soma = 1;

    //Logica do Programa.
    for (int i = 0; i < LINHA; i++)       {
        for (int j = 0; j < COLUNA; j++)  {
            matriz[i][j] = soma;
            soma++;
            printf("%d ", matriz[i][j] = 0);//Usar essa parte para o Desafio BATALHA NAVAL
    }
        printf("\n");
    }
        
    //Busca condicional do elemento alvo.
    for (int i = 0; i < LINHA; i++)      {
        for (int j = 0; j < COLUNA; j++) {
            if (matriz[i][j] == target)  {
                printf("O valor de %d encontrado no indice(%d, %d) \n", target, i, j);
                found = 1;
                break;
    }
            
    }
        if (found) break;
        
    }
    
    if (!found)                          {
        printf("\n", target);
    }
    
    

    return 0;
}