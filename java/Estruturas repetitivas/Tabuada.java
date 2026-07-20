import java.util.Locale;
import java.util.Scanner;

public class Tabuada {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int Num;

        System.out.println("Digite qual numero deseja consultar a tabuada:");
        Num = sc.nextInt();

        for (int i = 0; i <= 10; i++) {
            System.out.println(Num + " x " + i + " = " + (Num * i));
        }

        sc.close();
    }
}