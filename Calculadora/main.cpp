#include <iostream>

using namespace std;

int main()
{
    double numero1 = 0;
    double numero2 = 0;
    cout << "Introduce tu primer numero: ";
    cin >> numero1;
    cout << "Introduce tu segundo numero: " << endl;
    cin >> numero2;
    cout << "El resultado de la suma de ambos numeros es: " << numero1 + numero2 << endl;
    cout << "El resultado de la resta de ambos numeros es: " << numero1 - numero2 << endl;
    cout << "El resultado de la multiplicacion de ambos numeros es: " << numero1 * numero2 << endl;
    cout << "El resultado de la division de ambos numeros es: " << numero1 / numero2 << endl;
    return 0;
}
