#include "iostream"

using namespace std;

int main(void)
{
    int dividendo, divisor;

    cout << endl << "Este programa te servira para comprobar si un numero es par o impar" << endl;

    cout << endl << "Ingresa el numero" << endl;
    cin >> dividendo;

    if( dividendo%2 == 0)
    {
        cout << endl << dividendo << " es un numero par";
    }
    else
    {
        cout << endl << dividendo << " es un numero impar";
    }
    
}