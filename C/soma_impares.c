#include <stdio.h>
#include <locale.h>  // Inclusão da biblioteca de localização

int main(){
    setlocale(LC_ALL, "");  // Configura as opções de localização

    int X, Y, soma, troca;  // Declaração de variáveis

    soma = 0;  // Inicialização da variável que armazenará a soma dos números ímpares

    // Leitura dos dois números
    printf("Digite dois numeros:\n");
    scanf("%d", &X);
    scanf("%d", &Y);

    // Verificação da ordem dos números e troca se necessário
    if (X > Y){
        troca = X;  // Armazenamento temporário do valor de X
        X = Y;      // Troca dos valores
        Y = troca;
    }

    // Loop para somar os números ímpares entre X e Y
    for (int i = X+1; i < Y; i++) {
        if (i % 2 != 0) {  // Verificação se o número é ímpar
            soma = soma + i;  // Adição do número ímpar à soma total
        }
    }

    // Exibição do resultado
    printf("SOMA DOS IMPARES = %d\n", soma);

    return 0;
}
