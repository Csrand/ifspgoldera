#include<iostream>
#include<iomanip>
using namespace std;
int main(){
     float deposito, taxa, rendimento, total;
        cout << "Calculador de Rendimento!" << "\n";
        cout <<"informe seu deposito:" <<"\n";
        cin >> deposito;
        cout <<"informe a taxa de juros:" <<"\n";
        cin >> taxa;
             rendimento = deposito * (taxa / 100);
             total = deposito + rendimento;
        cout << fixed << setprecision(2); 
        cout << "Seu rendimento foi de:" <<"\n" << rendimento << " Reais" <<"\n";
        cout << "Valor total:" <<"\n" << total << " Reais";

    return 0;
}
