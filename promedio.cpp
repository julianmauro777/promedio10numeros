#include <iostream>

using std::cin;
using std::cout;

int main()
{
    float sumatoria {}; 
    int i {}; 
    constexpr int cantidad {10};
    int array_numero[cantidad] {};

    cout << "Calculamos el promedio de " << cantidad << " numeros ingresados" << '\n';

    while (i < cantidad)
    {
        cout << "Ingrese un numero" << '\n';
        cin >> array_numero [i];
        sumatoria += array_numero [i];
        i++;
    }

    cout << "El promedio es: " << sumatoria / cantidad;
    return 0;
}
