#include <stdio.h>
#include <locale.h>  // Inclusão da biblioteca de localização

int main(){
    setlocale(LC_ALL, "");  // Configura as opções de localização

    // Declaração de variáveis para armazenar as notas e a nota final
    double nota1, nota2, notaFinal;

    // Solicita a primeira nota do usuário
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    // Solicita a segunda nota do usuário
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    // Calcula a nota final somando nota1 e nota2
    notaFinal = nota1 + nota2;

    // Exibe a nota final
    printf("NOTA FINAL = %.1lf\n", notaFinal);

    // Verifica se o aluno foi reprovado (nota final menor que 60)
    if (notaFinal < 60.0){
        printf("REPROVADO\n");
    }

    return 0;
}
