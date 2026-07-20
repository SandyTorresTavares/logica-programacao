import java.util.Locale;
import java.util.Scanner;

public class MediaIdades {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int idade;
        int soma = 0;
        int quantidade = 0;
        double media;

        System.out.print("Digite uma idade: ");
        idade = sc.nextInt();

        while (idade >= 0) {
            soma += idade;
            quantidade++;

            System.out.print("Digite uma idade: ");
            idade = sc.nextInt();
        }

        if (quantidade == 0) {
            System.out.println("IMPOSSIVEL CALCULAR");
        } else {
            media = (double) soma / quantidade;
            System.out.printf("MEDIA = %.2f%n", media);
        }

        sc.close();
    }
}