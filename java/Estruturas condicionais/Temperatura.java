import java.util.Locale;
import java.util.Scanner;

public class Temperatura {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        char origem, destino;
        double temperatura, resultado = 0;

        System.out.print("Digite a escala de origem (C/F/K): ");
        origem = sc.next().toUpperCase().charAt(0);

        System.out.print("Digite a escala de destino (C/F/K): ");
        destino = sc.next().toUpperCase().charAt(0);

        System.out.print("Digite a temperatura: ");
        temperatura = sc.nextDouble();

        if (origem == 'C') {

            if (destino == 'F') {
                resultado = temperatura * 9.0 / 5.0 + 32.0;
            } else if (destino == 'K') {
                resultado = temperatura + 273.15;
            } else {
                resultado = temperatura;
            }

        } else if (origem == 'F') {

            if (destino == 'C') {
                resultado = (temperatura - 32.0) * 5.0 / 9.0;
            } else if (destino == 'K') {
                resultado = (temperatura - 32.0) * 5.0 / 9.0 + 273.15;
            } else {
                resultado = temperatura;
            }

        } else if (origem == 'K') {

            if (destino == 'C') {
                resultado = temperatura - 273.15;
            } else if (destino == 'F') {
                resultado = (temperatura - 273.15) * 9.0 / 5.0 + 32.0;
            } else {
                resultado = temperatura;
            }

        } else {
            System.out.println("Escala de origem inválida.");
            sc.close();
            return;
        }

        System.out.printf("Temperatura convertida: %.2f %c%n", resultado, destino);

        sc.close();
    }
}