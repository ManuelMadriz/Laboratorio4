#include "iostream"
#include "string"

using namespace std;

int main(void)
{
   string cadena;
   char firstchar, lastchar;

   cout << endl << "Por favor, ingresa una palabra" << endl;
   cin >> cadena;
   
   firstchar = cadena[0];
   
   lastchar = cadena[cadena.length() - 1];

   if(toupper(firstchar) == toupper(lastchar))
   {
       cout << endl << "La palabra inicia y termina con la misma letra" << endl;
   }
   else
   {
       cout << endl << "La palabra inicia y termina con letras distintas" << endl;
   }
}