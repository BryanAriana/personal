#include <iostream>

using namespace std;
void Print(string message)
{
cout << message << endl;
}
int suma(int numero1, int numero2)
{
return numero1 + numero2;
}
int resta(int numero1, int numero2)
{
return numero1 - numero2;
}
int multiplicacion(int numero1, int numero2)
{
return numero1 * numero2;
}
int division(int numero1, int numero2)
{
return numero1 / numero2;
}
int main()
{

    int numero1 = 0;
    int numero2 = 0;
    cout << "Introduce tu primer numero: ";
    cin >> numero1;
    cout << "Introduce tu segundo numero: " << endl;
    cin >> numero2;
    int sum = suma(numero1, numero2);
    int res = resta(numero1, numero2);
    int mul = multiplicacion(numero1, numero2);
    int div = division(numero1, numero2);
    cout << "El resultado de la suma de ambos numeros es: " << sum << endl;
    cout << "El resultado de la resta de ambos numeros es: " << res << endl;
    cout << "El resultado de la multiplicacion de ambos numeros es: " << mul << endl;
    cout << "El resultado de la division de ambos numeros es: " << div << endl;

    Print("UwU");
    return 0;
}
