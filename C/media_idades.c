#include <stdio.h>
#include <locale.h>  // Inclusão da biblioteca de localização

int main(){
    setlocale(LC_ALL, "");  // Configura as opções de localização

    // Declaração das variáveis
    int idade, cont, soma;
    double media;

    // Solicita as idades do usuário
    printf("Digite as idades:\n");
    scanf("%d", &idade);

    // Inicialização das variáveis de soma e contador
    soma = 0;
    cont = 0;

    // Loop para ler as idades enquanto forem não-negativas
    while (idade >= 0){
        soma += idade;  // Acumula a idade na variável soma
        cont++;  // Incrementa o contador de idades
        scanf("%d", &idade);  // Lê a próxima idade
    }

    // Verifica se pelo menos uma idade foi inserida
    if (cont == 0) {
        printf("IMPOSSIVEL CALCULAR\n");  // Não há dados para calcular a média
    }
    else {
        // Calcula a média das idades
        media = (double) soma / cont;
        // Exibe o resultado
        printf("MEDIA = %.2lf\n", media);
    }

    return 0;  // Fim do programa
}
