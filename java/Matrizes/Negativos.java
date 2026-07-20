import java.util.Scanner;

public class Negativos {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int M, N;

        System.out.print("Quantas linhas? ");
        M = sc.nextInt();

        System.out.print("Quantas colunas? ");
        N = sc.nextInt();

        int[][] matriz = new int[M][N];

        // Leitura da matriz
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {

                System.out.print("Elemento [" + i + "," + j + "]: ");
                matriz[i][j] = sc.nextInt();
            }
        }

        System.out.println("Numeros negativos:");

        // Impressão dos negativos
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {

                if (matriz[i][j] < 0) {
                    System.out.println(matriz[i][j]);
                }
            }
        }

        sc.close();
    }
}