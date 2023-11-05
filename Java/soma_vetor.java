import java.util.Locale;
import java.util.Scanner;

public class soma_vetor {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        System.out.print("Quantos números você vai digitar? ");
        int n = sc.nextInt();

        double[] vet = new double[n];

        for (int i = 0; i < n; i++){
            System.out.print("Digite um número: ");
            vet[i] = sc.nextDouble();
        }

        System.out.print("VALORES = ");
        for (int i = 0; i < n; i++){
            System.out.print(String.format("%.1f ", vet[i]));
        }
        System.out.println(" ");

        double soma = 0;

        for (int i = 0; i < n; i++){
            soma += vet[i];
        }

        System.out.println("SOMA = " + String.format("%.2f", soma));

        double media = soma / n;
        System.out.println("MEDIA = " + String.format("%.2f", media));

        sc.close();

    }
}
