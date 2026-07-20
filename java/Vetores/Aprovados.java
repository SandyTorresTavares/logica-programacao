import java.util.Locale;
import java.util.Scanner;

public class Aprovados {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N;

        System.out.print("Quantos alunos serao digitados: ");
        N = sc.nextInt();

        String[] nomes = new String[N];
        double[] nota1 = new double[N];
        double[] nota2 = new double[N];

        for (int i = 0; i < N; i++) {

            System.out.println("Digite os dados do " + (i + 1) + "º aluno:");

            System.out.print("Nome: ");
            nomes[i] = sc.next();

            System.out.print("Nota do primeiro semestre: ");
            nota1[i] = sc.nextDouble();

            System.out.print("Nota do segundo semestre: ");
            nota2[i] = sc.nextDouble();
        }

        System.out.println("\nAlunos aprovados:");

        for (int i = 0; i < N; i++) {

            double media = (nota1[i] + nota2[i]) / 2.0;

            if (media >= 6.0) {
                System.out.println(nomes[i]);
            }
        }

        sc.close();
    }
}