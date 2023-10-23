#include <stdio.h>
#include <locale.h>  // Inclusão da biblioteca de localização

int main(){
    setlocale(LC_ALL, "");  // Configura as opções de localização
    double largura, comprimento, valorm2, area, preco;  // Declaração das variáveis que serão usadas

    // Solicita ao usuário a largura do terreno
    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    // Solicita ao usuário o comprimento do terreno
    printf("Digite  comprimento do terreno: ");
    scanf("%lf", &comprimento);

    // Solicita ao usuário o valor do metro quadrado
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valorm2);

    area = largura * comprimento;  // Calcula a área do terreno
    preco = area * valorm2;        // Calcula o preço do terreno

    // Exibe a área e o preço do terreno
    printf("Area do terreno = %.2lf\n", area);
    printf("Preço do terreno = %.2lf\n", preco);

    return 0;
}
