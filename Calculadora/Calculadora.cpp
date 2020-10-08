/*  Ejercicio Calculadora
    Computación I 2020-2 ENESJ
    Creado por Walter Andrei
    Fecha: 06/10/20
*/

#include <iostream>

int main()
{
    std::cout << "Este programa hace operaciones basicas entre dos numeros.\n";
    float a, b, resultado;
    int na, nb;
    char operador;
    std::cout << "Primer numero: ";
    std::cin >> a;
    std::cout << "Escribe el simbolo de la operacion a aplicar ('+' para suma, '-' para resta, '*' para multiplicacion, '/' para division, '%' para modulo): ";
    std::cin >> operador;
    std::cout << "Segundo numero: ";
    std::cin >> b;

    switch (operador)
    {
    case '+':
        resultado = a + b;
        break;
    case '-':
        resultado = a - b;
        break;
    case '*':
        resultado = a * b;
        break;
    case '/':
        if (b == 0)
        {
            std::cout << "Division entre cero invalida. Abortando ejecucion.\n";
            return 2;
        }
        resultado = a / b;
        break;
    case '%':
        na = int(a);
        nb = int(b);
        if (na != a || nb != b)
            std::cout << "Se modificaron los valores a numeros enteros. Nuevos valores: a = " << na << "; b = " << nb << '\n';
        if (b == 0)
        {
            std::cout << "Modulo evaluado en cero invalido. Abortando ejecucion.\n";
            return 3;
        }
        na %= nb;
        resultado = float(na);
        break;
    default:
        std::cout << "Operador " << operador << " no valido, intente nuevamente.\n";
        return 1;
    }

    std::cout << "\nResultado:\n" << a << ' ' << operador << ' ' << b << " = " << resultado << '\n';
    return 0;
}
