
public class Main {
    public static void main(String[] agrs) {
        int x = 1, num2 = 3, num3 = 8, num4 = 3, num5 = 5;

        System.out.println("x " + " + " + num2 + " * " + num3 + " = " + num4 + "x" + " - " + num5);

        System.out.println("Pasamos los valores x al lado derecho y la constante 5 a la izquierda");

        System.out.println(num2 + " * " + num3 + " = " + num5 + " = " + num4 + "x" + " - " + "x");

        System.out.println("multiplicamos la constante 3 con la 8 y restamos 3x menos x");

        System.out.println((num2 * num3) + " + " + num5 + " = " + (num4 - x) + "x");

        System.out.println("Sumamos constante 24 con la 5");

        System.out.println(((num2 * num3) + num5) + " = " + (num4 - x) + "x");

        System.out.println("Despejamos x para tener la solucion de la operacion");

        System.out.println("x" + " = " + ((num2 * num3) + num5) + " / " + (num4 - x));

    }
}