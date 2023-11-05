import java.util.Locale;
import java.util.Scanner;

public class diagonal_negativos {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

       System.out.print("Qual a ordem da matriz? ");
       int n = sc.nextInt();

       int[][] mat = new int [n][n];

       for (int i = 0; i < n; i++){
           for (int j = 0; j < n; j++){
               System.out.print("Elemento [" + i + "," + j + "]: ");
               mat[i][j] = sc.nextInt();
           }
       }

       System.out.println("DIAGONAL PRINCIPAL: ");
       for (int i = 0; i < n; i++){
           System.out.print(mat[i][i] + " ");
       }
       System.out.println();

       int negativos = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (mat[i][j] < 0){
                    negativos += 1;
                }
            }
        }

        System.out.println("QUANTIDADE DE NEGATIVOS = " +  negativos);

        sc.close();

    }
}
