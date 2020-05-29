#include "iostream"

using namespace std;

int main(void)
{
    int dividendo, divisor;

    cout << endl << "Este programa te servira para comprobar si un numero es divisible por otro" << endl;

    cout << endl << "Ingresa el dividendo" << endl;
    cin >> dividendo;

    cout << endl << "Ingresa el divisor"<< endl;
    cin >> divisor;


    if(dividendo%divisor == 0)
    {
        cout << endl << dividendo << " es divisible entre " << divisor;
    }
    else
    {
        cout << endl << dividendo << " no es divisible entre " << divisor;
    }
    
}