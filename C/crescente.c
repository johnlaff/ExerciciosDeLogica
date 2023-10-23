#include <stdio.h>
#include <locale.h>  // Inclusão da biblioteca de localização

int main(){
    setlocale(LC_ALL, "");  // Configura as opções de localização

    // Declaração das variáveis x e y
    int x, y;

    // Instrução para o usuário digitar dois números
    printf("Digite dois numeros:\n");
    scanf("%d", &x); // Leitura do primeiro número
    scanf("%d", &y); // Leitura do segundo número

    // Loop para continuar comparando os números enquanto eles forem diferentes
    while (x != y) {

        // Comparação dos números e exibição do resultado
        if (x > y) {
            printf("DECRESCENTE!\n"); // Se x > y, a ordem é decrescente
        }
        else {
            printf("CRESCENTE!\n"); // Se x < y, a ordem é crescente
        }

        // Solicitação para digitar dois novos números
        printf("Digite dois numeros:\n");
        scanf("%d", &x); // Leitura do novo valor para x
        scanf("%d", &y); // Leitura do novo valor para y
    }

    return 0; // Fim do programa
}
