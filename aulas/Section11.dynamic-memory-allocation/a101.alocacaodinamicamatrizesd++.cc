#include <stdio.h>
#include <stdlib.h>
#include <new>

int main(){
    
    //Definindo Variáveis
    int linhas, colunas, i = 3, j = 3;
    int **matriz;

    //Lendo o número de linhas e colunas pelo usuário
    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    printf("\nDigite o número de colunas: ");
    scanf("%d", &colunas);

    //Alocando as linhas
    matriz = (int **) new int[linhas];
 
    //Alocando memória para as colunas de cada linha
    for(i = 0; i < linhas; i++){
        matriz[i] = (int *) new int[colunas];
    }

    //Preenchendo valores e exibindo matriz
    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //Liberando memória
    for(i = 0; i < linhas; i++){
        free(matriz[i]);
    }

    return 0;
}