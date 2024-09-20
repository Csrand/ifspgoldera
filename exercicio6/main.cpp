#include <iostream>
using namespace std;
int main(){
    int salario, aumento;
    cout << "Voce ganhou um aumento de 25%%!!!" <<"\n";
    cout << "Digite seu salario:"<<"\n";
    cin >> salario;
    aumento = ( salario / 4 ) + salario;
    cout << "Seu novo salario e:" << "\n" << aumento <<" Reais";
    return 0;

}