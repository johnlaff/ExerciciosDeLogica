#include <stdio.h>
#include <locale.h>  // Inclusão da biblioteca de localização

int main(){
    setlocale(LC_ALL, "");  // Configura as opções de localização

    // Declaração da variável que armazena a quantidade de números a serem digitados
    int n;
    printf("Quantos números você vai digitar? ");
    scanf("%d", &n);

    // Declaração do array que vai armazenar os números digitados
    int vet[n];

    // Loop para ler 'n' números do usuário e armazená-los no array
    for (int i = 0; i < n; i++){
        printf("Digite um número: ");
        scanf("%d", &vet[i]);
    }

    // Exibição dos números negativos
    printf("\nNUMEROS NEGATIVOS:\n");
    for (int i = 0; i < n; i++){
        if (vet[i] < 0){  // Condição para verificar se o número é negativo
            printf("%d\n", vet[i]);
        }
    }

    return 0;  // Fim do programa
}
