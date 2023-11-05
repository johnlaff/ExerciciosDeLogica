import java.util.Locale;
import java.util.Scanner;

public class retangulo {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double area, perimetro, diagonal;

        System.out.print("Base do retangulo: ");
        double base = sc.nextDouble();

        System.out.print("Altura do retangulo: ");
        double altura = sc.nextDouble();

        area = base * altura;
        System.out.println("AREA = " + String.format("%.4f", area));

        perimetro = 2 * (base + altura);
        System.out.println("PERIMETRO = " + String.format("%.4f", perimetro));

        diagonal = Math.sqrt(Math.pow(base, 2) + Math.pow(altura, 2));
        System.out.println("DIAGONAL = " + String.format("%.4f", diagonal));

        sc.close();

    }
}