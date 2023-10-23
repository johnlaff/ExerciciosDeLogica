#include <stdio.h>
#include <locale.h>  // Inclusão da biblioteca de localização

int main(){
    setlocale(LC_ALL, "");  // Configura as opções de localização

    int n;  // Variável para armazenar a quantidade de números que serão digitados
    double soma, media;  // Variáveis para armazenar a soma e a média dos números

    // Solicita ao usuário a quantidade de números que serão digitados
    printf("Quantos números você vai digitar? ");
    scanf("%d", &n);

    double vet[n];  // Declaração do vetor para armazenar os números
    soma = 0.0;  // Inicialização da variável soma com 0.0

    // Loop para ler os números do usuário e somá-los
    for (int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        soma = soma + vet[i];
    }

    // Exibição dos números digitados
    printf("\nVALORES = ");
    for (int i = 0; i < n; i++){
        printf("%.1lf ", vet[i]);
    }

    // Exibição da soma dos números
    printf("\nSOMA = %.2lf\n", soma);

    // Cálculo e exibição da média
    media = soma / n;
    printf("MEDIA = %.2lf\n", media);

    return 0;
}
