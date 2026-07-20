import java.util.Locale;
import java.util.Scanner;
public class menor_de_tres {
     public static void main(String[] args) { 
 Locale.setDefault(Locale.US);
 Scanner sc = new Scanner(System.in);

 int A, B, C, menor;


 System.out.println ("Digite o primeiro número:");
 A = sc.nextInt();
 System.out.println ("Digite o segundo numero:");
 B = sc.nextInt();
 System.out.println ("Digite o terceiro número:");
 C = sc.nextInt();

 if(A < B && A < C) {
    menor = A;
 }

 else if(B < C) {
    menor = B;
 }

 else {
    menor = C;
 }

 System.out.println ("Menor = " + menor);


 sc.close();
     }
 

}

