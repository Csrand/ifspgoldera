#include<iostream>
#include<iomanip>
using namespace std;
int main(){
   float salario, valor_da_hora, salario_total;
   int banco_de_horas;
        cout << "Calculador de banco de horas!" << "\n";
        cout <<"informe seu salario:" <<"\n";
            cin >> salario;
        cout <<"informe quantas horas tem no seu banco de horas:" <<"\n";
            cin >> banco_de_horas;
            valor_da_hora = salario / banco_de_horas;
            salario_total = banco_de_horas * valor_da_hora;
        cout << fixed << setprecision(2); 
        cout << "Voce vai receber:" <<"\n" << salario_total << " Reais";
    return 0;
}