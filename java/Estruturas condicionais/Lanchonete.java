import java.util.Locale;
import java.util.Scanner;

public class Lanchonete {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int codigo, quantidade;
        double total = 0.0;

        System.out.print("Código do produto: ");
        codigo = sc.nextInt();

        System.out.print("Quantidade: ");
        quantidade = sc.nextInt();

        switch (codigo) {
            case 1:
                total = quantidade * 5.00;
                break;

            case 2:
                total = quantidade * 6.00;
                break;

            case 3:
                total = quantidade * 7.00;
                break;

            case 4:
                total = quantidade * 4.00;
                break;

            case 5:
                total = quantidade * 5.50;
                break;

            default:
                System.out.println("Código inválido.");
                sc.close();
                return;
        }

        System.out.printf("Valor a pagar: R$ %.2f%n", total);

        sc.close();
    }
}