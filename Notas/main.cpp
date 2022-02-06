#include <iostream>

using namespace std;

int main()
{
    int DerechoInformatico = 0;
    int Programacion1 = 0;
    int Calculo1 = 0;
    int ProcesoAdminisrativo = 0;
    int Fisica1 = 0;
    cout << "Ingrese la nota de Derecho Informatico" << endl;
    cin >> DerechoInformatico;
    cout << "Ingrese la nota de Programacion 1" << endl;
    cin >> Programacion1;
    cout << "Ingrese la nota de Calculo 1" << endl;
    cin >> Calculo1;
    cout << "Ingrese la nota de Proceso Administrativo" << endl;
    cin >> ProcesoAdminisrativo;
    cout << "Ingrese la nota de Fisica 1" << endl;
    cin >> Fisica1;
    cout << "Verficacion de notas finales" << endl;
    cout << "Derecho Informatico: " << endl;
    if (DerechoInformatico>=61)
        cout << "Uste aprobo el curso" << endl;
    else cout << "Usted reprobo el curso" << endl;
    cout << "Programacion 1: " << endl;
    if (Programacion1>=61)
        cout << "Uste aprobo el curso" << endl;
    else cout << "Usted reprobo el curso" << endl;
    cout << "Calculo 1: " << endl;
    if (Calculo1>=61)
        cout << "Uste aprobo el curso" << endl;
    else cout << "Usted reprobo el curso" << endl;
    cout << "Proceso Administrativo: " << endl;
    if (ProcesoAdminisrativo>=61)
        cout << "Uste aprobo el curso" << endl;
    else cout << "Usted reprobo el curso" << endl;
    cout << "Fisica 1: " << endl;
    if (Fisica1>=61)
        cout << "Uste aprobo el curso" << endl;
    else cout << "Usted reprobo el curso" << endl;
    return 0;
}
