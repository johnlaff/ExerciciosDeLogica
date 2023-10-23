#include <stdio.h>
#include <locale.h>  // Inclusão da biblioteca de localização

// Função para limpar o buffer de entrada.
void limpar_entrada() {
    char c;
    // Continuar lendo caracteres até encontrar uma nova linha ou fim do arquivo.
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    setlocale(LC_ALL, "");  // Configura as opções de localização

    int n;

    // Solicitar ao usuário o número de pessoas a serem digitadas.
    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    // Declaração de arrays para armazenar os nomes, idades e alturas.
    char nome[n][50];
    int idade[n];
    double altura[n], somaAltura, mediaAltura, menores16, menores16porcentagem;

    // Inicializar a soma das alturas.
    somaAltura = 0;

    // Loop para coletar os dados das pessoas.
    for (int i = 0; i < n; i++) {
        printf("Dados da %da pessoa:\n", i + 1);

        // Coletar nome.
        printf("Nome: ");
        limpar_entrada();
        fgets(nome[i], 50, stdin);

        // Coletar idade.
        printf("Idade: ");
        scanf("%d", &idade[i]);

        // Coletar altura.
        printf("Altura: ");
        scanf("%lf", &altura[i]);

        // Acumular a soma das alturas.
        somaAltura += altura[i];
    }
    printf("\n");

    // Calcular e exibir a média das alturas.
    mediaAltura = (double)somaAltura / n;
    printf("Altura média: %.2lf\n", mediaAltura);

    // Inicializar contador de pessoas com menos de 16 anos.
    menores16 = 0;

    // Contar pessoas com menos de 16 anos.
    for (int i = 0; i < n; i++) {
        if (idade[i] < 16) {
            menores16++;
        }
    }

    // Calcular e exibir a porcentagem de pessoas com menos de 16 anos.
    menores16porcentagem = ((double)menores16 / n) * 100;
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", menores16porcentagem);

    // Exibir os nomes das pessoas com menos de 16 anos.
    for (int i = 0; i < n; i++) {
        if (idade[i] < 16) {
            printf("%s", nome[i]);
        }
    }

    return 0;
}
