#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float raio, area;
    cout << "*****************************" << "\n";
    cout << "******** CALCULADORA ********" << "\n";
    cout << "************ DE *************" << "\n";
    cout << "***** AREA DO CIRCULO *******" << "\n";
    cout << "*****************************" << "\n";


    cout << "Digite o valor do raio:" << "\n";
    cin >> raio;
    area = 3.14 *(raio * raio);
    cout <<"Resultado:" <<"\n" << area;
    return 0;
    }