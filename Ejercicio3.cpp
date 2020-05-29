#include "iostream"
#include "string"

using namespace std;

int main(void)
{
    int ctdchar, paridad;
    string palabra;

    cout << endl << "Ingresa una palabra, para calcular la cantidad de caracteres que tiene" << endl;
    cin >> palabra;

    ctdchar = palabra.length();

    cout << endl << "La cantidad de caracteres de la palabra ingresada es de " << ctdchar;

    if(ctdchar > 10)
    {
         cout << endl << "La longuitud de la palabra ingresada es mayor de diez";
    }
    else
    {
        cout << endl << "La longuitud de la palabra ingresada no es mayor de diez.";
    }
    
    if( ctdchar % 2 == 0 )
    {
        cout << endl << "La loguitud de la palabra es par";
    }
    else
    {
        cout << endl << "La loguitud de la palabra es impar";
    }  
}