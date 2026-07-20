import java.util.Locale;
import java.util.Scanner;

public class Troco {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int qnt;
        double preco, recebido, troco;

        System.out.print("Qual o preço do produto? ");
        preco = sc.nextDouble();

        System.out.print("Qual a quantidade do produto? ");
        qnt = sc.nextInt();

        System.out.print("Qual o valor recebido? ");
        recebido = sc.nextDouble();

        troco = recebido - (preco * qnt);

        if (troco >= 0) {
            System.out.println("TROCO = " + troco + " Reais");
        } else {
            System.out.println("DINHEIRO INSUFICIENTE. FALTAM " + Math.abs(troco) + " Reais");
        }

        sc.close();
    }
}
