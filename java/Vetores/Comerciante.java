import java.util.Locale;
import java.util.Scanner;

public class Comerciante {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double menos = 0, mais = 0, entre = 0;
        double valorCompra = 0, valorVenda = 0, lucroTotal = 0;

        System.out.println("Quantos produtos serao digitados:");
        int qnt = sc.nextInt();

        String[] nomes = new String[qnt];
        double[] venda = new double[qnt];
        double[] compra = new double[qnt];
        double[] lucro = new double[qnt];

        for (int i = 0; i < qnt; i++) {

            System.out.println("Nome do " + (i + 1) + "º produto:");
            nomes[i] = sc.next();

            System.out.println("Preco de compra:");
            compra[i] = sc.nextDouble();

            System.out.println("Preco de venda:");
            venda[i] = sc.nextDouble();

            lucro[i] = ((venda[i] - compra[i]) / compra[i]) * 100;

            lucroTotal += venda[i] - compra[i];
            valorCompra += compra[i];
            valorVenda += venda[i];
        }

        for (int i = 0; i < qnt; i++) {

            if (lucro[i] < 10) {
                menos++;
            } 
            else if (lucro[i] <= 20) {
                entre++;
            } 
            else {
                mais++;
            }
        }

        System.out.println("\nRelatorio:");
        System.out.println("Lucro abaixo de 10%: " + menos);
        System.out.println("Lucro entre 10% e 20%: " + entre);
        System.out.println("Lucro acima de 20%: " + mais);
        System.out.printf("Valor total de compra: R$ %.2f%n", valorCompra);
        System.out.printf("Valor total de venda: R$ %.2f%n", valorVenda);
        System.out.printf("Valor total de lucro: R$ %.2f%n", lucroTotal);

        sc.close();
    }
}
