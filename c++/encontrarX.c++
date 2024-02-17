#include <stdlib.h>
#include <iostream>

int main()
{
    int num1, num2, num3, x, sum = 0;

    srand(time(NULL));
    x = rand() % 27 + 1;

    std::cout << "numero random es " << x << std::endl;
    std::cout << "Encuentre el valor de x con la suma de tres numero solo podra introducir numero hasta 9" << std::endl;

    while (!(sum == x))
    {

        std::cout << "Introduzca su primer numero: " << std::endl;
        std::cin >> num1;

        std::cout << "Introduzca su segundo numero: " << std::endl;
        std::cin >> num2;

        std::cout << "Introduzca su tercer numero: " << std::endl;
        std::cin >> num3;

        if ((num1 > 9) || (num2 > 9) || (num3 > 9))
        {
            std::cout << "Los numeros mayores a 9 no son validos" << std::endl;
        }
        else if ((num1 < 0) || (num2 < 0) || (num3 < 0))
        {
            std::cout << "Los numeros negativos no son validos" << std::endl;
        }
        else if ((num1 == 0) && (num2 == 0) && (num3 == 0))
        {
            std::cout << "Los tres numeros no pueden ser 0 la suma de tres numeros en 0 es igual a 0." << std::endl;
        }
        else
        {
            sum = num1 + num2 + num3;
            if (sum == x)
            {
                std::cout << "Felicidades encontro el valor de X" << std::endl;
            }
        }
    }
}