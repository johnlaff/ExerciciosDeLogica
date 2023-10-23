#include <stdio.h>
#include <string.h>
#include <locale.h>  // Inclusão da biblioteca de localização

// Função para ler texto do usuário e remover o caractere de nova linha
void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

// Função para limpar o buffer de entrada
void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(){
    setlocale(LC_ALL, "");  // Configura as opções de localização

    // Declaração de variáveis para armazenar os nomes e as idades
    char nome1[50], nome2[50];
    int idade1, idade2;
    double idadeMedia;

    // Coletando dados da primeira pessoa
    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    ler_texto(nome1, 50); // Utiliza a função ler_texto para ler o nome
    printf("Idade: ");
    scanf("%d", &idade1); // Lê a idade

    // Coletando dados da segunda pessoa
    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    limpar_entrada(); // Limpa o buffer de entrada
    ler_texto(nome2, 50); // Utiliza a função ler_texto para ler o nome
    printf("Idade: ");
    scanf("%d", &idade2); // Lê a idade

    // Calcula a média das idades
    idadeMedia = (idade1 + idade2) / 2.0;

    // Exibe o resultado
    printf("A idade média de %s e %s é de %.1lf anos", nome1, nome2, idadeMedia);

    return 0; // Fim do programa
}
