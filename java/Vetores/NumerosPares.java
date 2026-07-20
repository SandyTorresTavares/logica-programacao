import java.util.Scanner;

public class NumerosPares {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int N;

        System.out.print("Quantos numeros serao digitados: ");
        N = sc.nextInt();

        int[] numeros = new int[N];

        for (int i = 0; i < N; i++) {
            System.out.print("Digite um numero: ");
            numeros[i] = sc.nextInt();
        }

        int quantidadePares = 0;

        System.out.println("Numeros pares:");

        for (int i = 0; i < N; i++) {

            if (numeros[i] % 2 == 0) {
                System.out.println(numeros[i]);
                quantidadePares++;
            }
        }

        System.out.println("Quantidade de numeros pares: " + quantidadePares);

        sc.close();
    }
}