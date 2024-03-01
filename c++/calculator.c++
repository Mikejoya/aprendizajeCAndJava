#include <iostream>
#include <string>

int sum(int num1, int num2)
{
    return num1 + num2;
}

int res(int num1, int num2)
{
    return num1 - num2;
}

int multi(int num1, int num2)
{
    return num1 * num2;
}

double dividir(double num1, double num2)
{
    double resultado = num1 / num2;
    return resultado;
}

std::string minusculas(std::string palabra)
{
    for (std::string::size_type i = 0; i < palabra.length(); i++)
    {
        palabra[i] = std::tolower(palabra[i]);
    }
    return palabra;
}

int main()
{
    int num1, num2;
    double num3, num4, resultado;
    double resultadoDiv;
    bool continuar;
    std::string siNo, minuscula, si = "si";
    char typeOperation;

    std::cout << "Introduzca tipo de operacion que desea realizar. use + para suma, para - resta, para * multiplicacion, para / division" << std::endl;

    std::cin >> typeOperation;

    if ((typeOperation == '+') || (typeOperation == '-') || (typeOperation == '*') || (typeOperation == '/'))
    {
        do
        {
            switch (typeOperation)
            {
            case '+':
                std::cout << "Introduzca el primer numero para realizar la suma." << std::endl;
                std::cin >> num1;
                std::cout << "Introduzca el segundo numero para realizar la suma." << std::endl;
                std::cin >> num2;
                resultado = sum(num1, num2);
                std::cout << "El resultado es: " << resultado << std::endl;

                break;
            case '-':
                std::cout << "Introduzca el primer numero para realizar la resta." << std::endl;
                std::cin >> num1;
                std::cout << "Introduzca el segundo numero para realizar la resta." << std::endl;
                std::cin >> num2;
                resultado = res(num1, num2);
                std::cout << "El resultado es: " << resultado << std::endl;
                break;
            case '*':
                std::cout << "Introduzca el primer numero para realizar la multiplicacion." << std::endl;
                std::cin >> num1;
                std::cout << "Introduzca el segundo numero para realizar la multiplicacion." << std::endl;
                std::cin >> num2;
                resultado = multi(num1, num2);
                std::cout << "El resultado es: " << resultado << std::endl;

                break;
            case '/':
                std::cout << "Introduzca el primer numero para realizar la division." << std::endl;
                std::cin >> num3;
                std::cout << "Introduzca el segundo numero para realizar la division." << std::endl;
                std::cin >> num4;
                resultadoDiv = dividir(num3, num4);
                std::cout << "El resultado es: " << resultadoDiv << std::endl;

                break;
            default:
                std::cout << "La operacion no es posible de realizar " << std::endl;
                continuar = true;
                continue;
            }

            std::cout << "Desea continuar haciendo operaciones? escriba si para continuar y no para parar." << std::endl;
            std::cin >> siNo;
            minuscula = minusculas(siNo);
            if (minuscula == si)
            {
                continuar = true;
            }
            else
            {
                std::cout << "Gracias por usar nuestra calculadora. nos vemos pronto." << std::endl;
                continuar = false;
            }
        } while (continuar);
    }
    else
    {
        std::cout << "Operacion no valida. " << std::endl;
        return 1;
    }
    return 0;
}
