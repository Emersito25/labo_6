#include <iostream>
using namespace std;

int main(){

    int num;
    int factorial = 1;

    do
    {
        cout << "Ingrese el numero que quiere calcular: ";
        cin >> num;

        if (num <= 0)
        {
            cout << "Numero invalido, ingrese un numero mayor que 0." << endl;
        }

    } while (num <= 0);

    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i; 
    }

    cout << "El factorial de " << num << " es " << factorial << endl;
    




    return 0;
}