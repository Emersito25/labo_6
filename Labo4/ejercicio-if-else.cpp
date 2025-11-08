#include <iostream>
#include <string>
using namespace std;

int main(){

    string nombreR, contraR;
    string nombreIS, contraIS;
    int opcion;

    int a, b, r;

    cout << "--Menu de Ingreso--" << endl;
    cout << "Crea tu usuario" << endl;
    cout << "Nombre de usuario:" << endl;
    cin >> nombreR;
    cout << "Contraseña: " << endl;
    cin >> contraR;

    cout << "--CALCULADORA--" << endl;
    cout << "Inicie sesion con sus credenciales" << endl;
    
    do
    {
        cout << "Nombre de Usuario: " << endl;
        cin >> nombreIS;

    } while (nombreIS != nombreR);

    do
    {
        cout << "Contraseña: " << endl;
        cin >> contraIS;

    } while (contraIS != contraR);

    cout << "--Menu Principal--" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "5. Salir" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Ingrese el primer digito: " << endl;
        cin >> a;
        cout << "Ingrese el segundo digito: " << endl;
        cin >> b;
        r = a + b;
        cout << "El resultado de la suma es " << r << endl;
        break;

    case 2:
        cout << "Ingrese el primer digito: " << endl;
        cin >> a;
        cout << "Ingrese el segundo digito: " << endl;
        cin >> b;
        r = a - b;
        cout << "El resultado de la resta es " << r << endl;
        break;

    case 3:
        cout << "Ingrese el primer digito: " << endl;
        cin >> a;
        cout << "Ingrese el segundo digito: " << endl;
        cin >> b;
        r = a * b;
        cout << "El resultado de la multiplicacion es " << r << endl;
        break;

    case 4:
        cout << "Ingrese el primer digito: " << endl;
        cin >> a;
        cout << "Ingrese el segundo digito: " << endl;
        cin >> b;

        if (b == 0)
        {
            do
            {
                cout << "No se puede dividir entre 0, ingrese otro numero: " << endl;
                cin >> b;
            } while (b == 0);
        }
    
        r = a / b;
        cout << "El resultado de la division es " << r << endl;
        break;
        
    case 5:
        cout << "Gracias por usar nuestro programa. " << endl;
        break;
    
    default:
        cout << "Opcion invalida." << endl;
        break;
    }
    
    return 0;
}