import java.util.Locale;
import java.util.Scanner;

public class Crescente {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N1, N2;

        System.out.print("Digite o primeiro número: ");
        N1 = sc.nextInt();

        System.out.print("Digite o segundo número: ");
        N2 = sc.nextInt();

        while (N1 != N2) {

            if (N1 > N2) {
                System.out.println("Decrescente");
            } else {
                System.out.println("Crescente");
            }

            System.out.print("Digite o primeiro número: ");
            N1 = sc.nextInt();

            System.out.print("Digite o segundo número: ");
            N2 = sc.nextInt();
        }

        sc.close();
    }
}