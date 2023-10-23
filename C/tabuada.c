#include <stdio.h>
#include <locale.h>  // Inclusão da biblioteca de localização

int main(){
    setlocale(LC_ALL, "");  // Configura as opções de localização

    int N;  // Variável para armazenar o número cuja tabuada será gerada

    // Solicita ao usuário o número para o qual a tabuada será gerada
    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &N);

    // Loop para calcular e exibir a tabuada do número N de 1 a 10
    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", N, i, N*i);
    }

    return 0;
}
