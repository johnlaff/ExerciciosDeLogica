#include <stdio.h>
#include <locale.h>  // Inclusão da biblioteca de localização

int main(){
    setlocale(LC_ALL, "");  // Configura as opções de localização

    // Declaração do array para armazenar os números
    int numeros[3];

    // Loop para ler 3 números do usuário
    for (int i = 0; i < 3; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &numeros[i]);
    }

    // Declaração e inicialização da variável 'menor' com o primeiro valor do array
    int menor = numeros[0];

    // Loop para encontrar o menor número entre os 3
    for (int i = 0; i < 3; i++){
        if (numeros[i] < menor){
            menor = numeros[i];  // Atualiza o menor número encontrado
        }
    }

    // Exibe o menor número
    printf("MENOR = %d", menor);

    return 0;  // Fim do programa
}
