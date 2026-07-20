import java.util.Locale;
import java.util.Scanner;
public class Notas {
     public static void main(String[] args) { 
 Locale.setDefault(Locale.US);
 Scanner sc = new Scanner(System.in);

double A, B, media;

System.out.println("Digite a primeira nota");
A = sc.nextDouble();

System.out.println("Digite a primeira nota");
B = sc.nextDouble();

media = (A + B) / 2;

if (media < 4) {

System.out.println("Voce esta reprovado. Sua media é: " + media);
}

else if (media > 6) {
    System.out.println("Voce esta aprovado! Sua media e " + media);
}

else {
    System.out.println("Voce esta de recuperacao. Sua media e " + media);
}





 sc.close();
 }
}
