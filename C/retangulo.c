#include <stdio.h>
#include <math.h>  // Biblioteca para usar funções matemáticas como sqrt() e pow()
#include <locale.h>  // Inclusão da biblioteca de localização

int main(){
    setlocale(LC_ALL, "");  // Configura as opções de localização

    // Declaração de variáveis para armazenar base, altura, área, perímetro e diagonal
    double base, altura, area, perimetro, diagonal;

    // Solicita ao usuário a base do retângulo
    printf("Base do retangulo: ");
    scanf("%lf", &base);

    // Solicita ao usuário a altura do retângulo
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    // Calcula a área do retângulo
    area = base * altura;

    // Calcula o perímetro do retângulo
    perimetro = 2 * (altura + base);

    // Calcula a diagonal do retângulo usando o teorema de Pitágoras
    diagonal = sqrt(pow(altura,2) + pow(base,2));

    // Exibe os resultados
    printf("AREA = %.4lf\n", area);
    printf("PERIMETRO = %.4lf\n", perimetro);
    printf("DIAGONAL = %.4lf\n", diagonal);

    return 0;
}
