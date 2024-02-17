package java;

import java.util.Scanner;

public class Maint {
    public static void main(String[] args) {
        int num1, num2, num3, stop = 0;

        double numRandom;

        numRandom = (int) (Math.random() * 27);
        int x = (int) numRandom;

        try (Scanner scanner = new Scanner(System.in)) {

            System.out.println(
                    "Encuentre el valor de x con la suma de tres numero solo podra introducir numero hasta 9");

            System.out.println(numRandom);

            System.out.println(x + "esto");

            while (!(x == stop)) {
                System.out.println("Introduzca su primer numero");
                num1 = scanner.nextInt();

                System.out.println("Introduzca su segundo numero");
                num2 = scanner.nextInt();

                System.out.println("Introduzca su tercero numero");
                num3 = scanner.nextInt();

                System.out.println("hola while");
                if ((num1 > 9) || (num2 > 9) || (num3 > 9)) {
                    System.out.println("El numero maximo permitido es hasta 9 inicie de nuevo");
                } else if ((num1 < 0) || (num2 < 0) || (num3 < 0)) {
                    System.out.println("El numero no puede ser negativo... iniciar de nuevo");
                } else {
                    stop = num1 + num2 + num3;
                    if (stop == x) {
                        System.out.println("Felicidades enconto el valor de X");
                    }
                }
            }
        } catch (java.util.InputMismatchException e) {
            System.out.println("Tiene que escribir numeros enteros, no se aceptan caracteres de otro tipo. " + e);
        }
    }
}