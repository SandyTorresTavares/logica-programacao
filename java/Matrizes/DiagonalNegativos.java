import java.util.Locale;
import java.util.Scanner;

public class DiagonalNegativos {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N;
        int somaNegativos = 0;

        System.out.print("Qual a ordem da matriz? ");
        N = sc.nextInt();

        int[][] matriz = new int[N][N];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {

                System.out.print("Elemento [" + i + "," + j + "]: ");
                matriz[i][j] = sc.nextInt();

                if (matriz[i][j] < 0) {
                    somaNegativos++;
                }
            }
        }

        System.out.println("DIAGONAL PRINCIPAL:");

        for (int i = 0; i < N; i++) {
            System.out.print(matriz[i][i] + " ");
        }

        System.out.println();
        System.out.println("QUANTIDADE DE NEGATIVOS = " + somaNegativos);

        sc.close();
    }
}