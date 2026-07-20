import java.util.Scanner;

public class CadaLinha {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int N;

        System.out.print("Qual a ordem da matriz? ");
        N = sc.nextInt();

        int[][] matriz = new int[N][N];

        // Leitura da matriz
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {

                System.out.print("Elemento [" + i + "," + j + "]: ");
                matriz[i][j] = sc.nextInt();
            }
        }

        System.out.println("Maior elemento de cada linha:");

        for (int i = 0; i < N; i++) {

            int maior = matriz[i][0];

            for (int j = 1; j < N; j++) {

                if (matriz[i][j] > maior) {
                    maior = matriz[i][j];
                }
            }

            System.out.println(maior);
        }

        sc.close();
    }
}