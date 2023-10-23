#include <stdio.h>
#include <locale.h>  // Inclusão da biblioteca de localização

int main(){
    setlocale(LC_ALL, "");  // Configura as opções de localização

    int m, n;  // Declaração das dimensões da matriz (m linhas, n colunas)

    // Solicitação das dimensões da matriz ao usuário
    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &m);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &n);

    double mat[m][n], soma[m];  // Declaração da matriz e do vetor de somas

    // Loop para leitura dos elementos da matriz
    for (int i = 0; i < m; i++){
        printf("Digite os elementos da %da. linha:\n", i+1);
        soma[i] = 0;  // Inicialização do vetor soma para a i-ésima linha
        for(int j = 0; j < n; j++){
            scanf("%lf", &mat[i][j]);  // Leitura do elemento (i, j) da matriz
            soma[i] = soma[i] + mat[i][j];  // Adição do elemento à soma da linha
        }
    }

    // Exibição do vetor de somas
    printf("VETOR GERADO:\n");
    for (int i = 0; i < m; i++){
        printf("%.1lf\n", soma[i]);
    }

    return 0;
}
