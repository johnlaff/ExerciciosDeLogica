import java.util.Locale;
import java.util.Scanner;

public class menor_de_tres {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        System.out.print("Primeiro valor: ");
        int n1 = sc.nextInt();

        System.out.print("Segundo valor: ");
        int n2 = sc.nextInt();

        System.out.print("Terceiro valor: ");
        int n3 = sc.nextInt();

        int menor;

        if (n1 < n2 && n1 < n3){
            menor = n1;
        }
        else menor = Math.min(n2, n3); // Retorna o mínimo de dois números

        System.out.println("MENOR = " + menor);

        sc.close();
    }
}
