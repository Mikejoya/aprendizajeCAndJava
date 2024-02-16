#include <iostream>

int main()
{
    int x = 1, num2 = 3, num3 = 8, num4 = 3, num5 = 5;

    std::cout << "x"
              << " + " << num2 << " * " << num3
              << " = " << num4 << "x"
              << " - " << num5 << "\n";

    std::cout << "Pasamos los valores x al lado derecho y la constante 5 a la izquierda"
              << "\n";

    std::cout << num2 << " * " << num3 << " + " << num5 << " = " << num4 << "x"
              << " - "
              << "x"
              << "\n";
    std::cout << "multiplicamos la contante 3 con la 8 y restamos 3x menos x"
              << "\n";

    std::cout << (num2 * num3) << " + " << num5 << " = " << (num4 - x) << "x"
              << "\n";

    std::cout << "Sumamos constante 24 con la 5"
              << "\n";

    std::cout << ((num2 * num3) + num5) << " = " << (num4 - x) << "x"
              << "\n";

    std::cout << "Despejamos x para tener la solucion de la operacion"
              << "\n";

    std::cout << "x "
              << " = " << ((num2 * num3) + num5) << " / " << (num4 - x) << std::endl;
}