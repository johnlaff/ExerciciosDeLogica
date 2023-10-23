#include <stdio.h>
#include <locale.h>  // Inclusão da biblioteca de localização

int main(){
    setlocale(LC_ALL, "");  // Configura as opções de localização

    int n, negativos; // Declarando as variáveis: 'n' para a ordem da matriz e 'negativos' para contar números negativos

    negativos = 0; // Inicializando o contador de números negativos

    // Solicitando ao usuário a ordem da matriz quadrada
    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n]; // Declarando uma matriz quadrada de ordem 'n'

    // Loop aninhado para preencher a matriz com números inteiros
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d,%d]: ", i, j); // Solicitando cada elemento da matriz
            scanf("%d", &mat[i][j]); // Armazenando o elemento na matriz
        }
    }

    // Imprimindo os elementos da diagonal principal da matriz
    printf("DIAGONAL PRINCIPAL:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) { // Verificando se estamos na diagonal principal
                printf("%d ", mat[i][j]); // Imprimindo o elemento na diagonal principal
            }
        }
    }

    // Loop aninhado para contar os números negativos na matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] < 0) { // Verificando se o elemento é negativo
                negativos++; // Incrementando o contador de números negativos
            }
        }
    }

    // Imprimindo a quantidade de números negativos na matriz
    printf("\nQUANTIDADE DE NEGATIVOS = %d\n", negativos);

    return 0; // Retornando 0 para indicar execução bem-sucedida
}
