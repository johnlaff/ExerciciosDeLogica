#include <stdio.h>
#include <math.h>
#include <locale.h>  // Inclusão da biblioteca de localização

int main(){
    setlocale(LC_ALL, "");  // Configura as opções de localização

    // Definição das variáveis para coeficientes e raízes da equação
    double a, b, c, delta, x1, x2;

    // Solicitação do coeficiente a
    printf("Coeficiente a: ");
    scanf("%lf", &a);

    // Loop para garantir que o coeficiente "a" não seja zero
    if (a == 0) {
        do {
            printf("O coeficiente a não pode valer zero, digite outro valor: ");
            scanf("%lf", &a);
        } while (a == 0);
    }

    // Solicitação dos coeficientes b e c
    printf("Coeficiente b: ");
    scanf("%lf", &b);

    printf("Coeficiente c: ");
    scanf("%lf", &c);

    // Cálculo do delta usando a fórmula delta = b^2 - 4ac
    delta = pow(b, 2) - 4 * a * c;

    // Verifica se a equação possui raízes reais
    if (delta < 0) {
        printf("Essa equação não possui raízes reais.\n");
    }
    else {
        // Cálculo das raízes x1 e x2 usando as fórmulas de Bhaskara
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        // Exibição dos resultados
        printf("X1 = %.4lf\n", x1);
        printf("X2 = %.4lf\n", x2);
    }

    return 0;
}
