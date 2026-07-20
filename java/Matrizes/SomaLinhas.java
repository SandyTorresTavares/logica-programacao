import java.util.Locale;
import java.util.Scanner;

public class SomaLinhas {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int M, N;

        System.out.print("Quantas linhas? ");
        M = sc.nextInt();

        System.out.print("Quantas colunas? ");
        N = sc.nextInt();

        double[][] matriz = new double[M][N];
        double[] vetor = new double[M];

        // Leitura da matriz
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                System.out.print("Elemento [" + i + "," + j + "]: ");
                matriz[i][j] = sc.nextDouble();
            }
        }

        // Soma das linhas
        for (int i = 0; i < M; i++) {

            double soma = 0;

            for (int j = 0; j < N; j++) {
                soma += matriz[i][j];
            }

            vetor[i] = soma;
        }

        System.out.println("Vetor gerado:");

        for (int i = 0; i < M; i++) {
            System.out.printf("%.1f%n", vetor[i]);
        }

        sc.close();
    }
}