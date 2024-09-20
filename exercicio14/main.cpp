#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float temperatura, faren;
    cout << "Conversor de Graus Celcius para Farenheit:" <<"\n";
    cout << "Informe uma Temperatura em Celsius:" <<"\n";
        cin >> temperatura;
     faren = ( temperatura *9 / 5)+32;
     cout << fixed <<setprecision(2);
    cout << temperatura << "graus Celsius equivale a" <<"\n" << faren << " graus Fahrenheit.";
    return 0;
    }