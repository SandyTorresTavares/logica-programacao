import java.util.Locale;
import java.util.Scanner;

public class MatrizGeral {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N;

        System.out.print("Qual a ordem da matriz? ");
        N = sc.nextInt();

        double[][] matriz = new double[N][N];

        // Leitura da matriz
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {

                System.out.print("Elemento [" + i + "," + j + "]: ");
                matriz[i][j] = sc.nextDouble();
            }
        }

        // a) Soma dos positivos
        double soma = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {

                if (matriz[i][j] > 0) {
                    soma += matriz[i][j];
                }
            }
        }

        System.out.printf("SOMA DOS POSITIVOS: %.1f%n", soma);

        // b) Linha escolhida
        System.out.print("Escolha uma linha: ");
        int linha = sc.nextInt();

        System.out.println("LINHA ESCOLHIDA:");

        for (int j = 0; j < N; j++) {
            System.out.print(matriz[linha][j] + " ");
        }

        System.out.println();

        // c) Coluna escolhida
        System.out.print("Escolha uma coluna: ");
        int coluna = sc.nextInt();

        System.out.println("COLUNA ESCOLHIDA:");

        for (int i = 0; i < N; i++) {
            System.out.print(matriz[i][coluna] + " ");
        }

        System.out.println();

        // d) Diagonal principal
        System.out.println("DIAGONAL PRINCIPAL:");

        for (int i = 0; i < N; i++) {
            System.out.print(matriz[i][i] + " ");
        }

        System.out.println();

        // e) Elevar negativos ao quadrado
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {

                if (matriz[i][j] < 0) {
                    matriz[i][j] = Math.pow(matriz[i][j], 2);
                }
            }
        }

        System.out.println("MATRIZ ALTERADA:");

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {

                System.out.printf("%.1f ", matriz[i][j]);
            }

            System.out.println();
        }

        sc.close();
    }
}