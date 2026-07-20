import java.util.Locale;
import java.util.Scanner;

public class MediaPares {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N;

        System.out.print("Quantos numeros serao digitados: ");
        N = sc.nextInt();

        int[] numeros = new int[N];

        int soma = 0;
        int quantidadePares = 0;

        for (int i = 0; i < N; i++) {

            System.out.print("Digite um numero: ");
            numeros[i] = sc.nextInt();
        }

        for (int i = 0; i < N; i++) {

            if (numeros[i] % 2 == 0) {
                soma += numeros[i];
                quantidadePares++;
            }
        }

        if (quantidadePares == 0) {
            System.out.println("NENHUM NUMERO PAR");
        } 
        else {
            double media = (double) soma / quantidadePares;
            System.out.printf("MEDIA DOS PARES = %.1f%n", media);
        }

        sc.close();
    }
}