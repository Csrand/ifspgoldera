#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float base, altura, area;
    cout << "*****************************" << "\n";
    cout << "**** CALCULADORA DE AREA ****" << "\n";
    cout << "*****************************" << "\n";
    cout << "Digite o valor da base:" << "\n";
    cin >> base;
    cout << "Digite o valor da altura:" << "\n";
    cin >> altura;
    area = (base * altura)/2;
    cout <<"Resultado:" <<"\n" << area;
    return 0;
    }