import java.util.Locale;
import java.util.Scanner;

public class soma_impares {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        System.out.println("Digite dois números:");
        int x = sc.nextInt();
        int y = sc.nextInt();

        int soma = 0, troca;

        if (x > y){
            troca = x;
            x = y;
            y = troca;
        }

        for (int i = x+1; i < y; i++){
            if (i % 2 != 0){
                soma += i;
            }
        }

        System.out.println("SOMA DOS IMPARES = " + soma);

        sc.close();

    }
}
