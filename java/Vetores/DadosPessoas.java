import java.util.Locale;
import java.util.Scanner;

public class DadosPessoas {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N;
        int homens = 0;
        int mulheres = 0;
        double somaAlturaMulheres = 0;

        double maiorAltura = 0;
        double menorAltura = 0;

        System.out.print("Quantas pessoas serao digitadas: ");
        N = sc.nextInt();

        for (int i = 0; i < N; i++) {

            System.out.print("Digite a altura: ");
            double altura = sc.nextDouble();

            System.out.print("Digite o genero (M/F): ");
            char genero = sc.next().charAt(0);

            if (i == 0) {
                maiorAltura = altura;
                menorAltura = altura;
            }

            if (altura > maiorAltura) {
                maiorAltura = altura;
            }

            if (altura < menorAltura) {
                menorAltura = altura;
            }

            if (genero == 'F') {
                somaAlturaMulheres += altura;
                mulheres++;
            } 
            else if (genero == 'M') {
                homens++;
            }
        }

        double mediaMulheres = somaAlturaMulheres / mulheres;

        System.out.printf("Menor altura = %.2f%n", menorAltura);
        System.out.printf("Maior altura = %.2f%n", maiorAltura);
        System.out.printf("Media das alturas das mulheres = %.2f%n", mediaMulheres);
        System.out.println("Numero de homens = " + homens);

        sc.close();
    }
}