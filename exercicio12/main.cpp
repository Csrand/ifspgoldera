#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float custo_teatro, valor_do_ingresso, vendas_min;
    cout << "Calcule quantos ingressos voce tem que vender "<<"\n";
    cout << "Informe o Custo do Local do Evento:" <<"\n";
        cin >> custo_teatro;
    cout <<"Informe o valor do ingresso:" <<"\n";
        cin >> valor_do_ingresso;
     vendas_min = custo_teatro / valor_do_ingresso;
     cout << fixed <<setprecision(2);
    cout << "E necessario vender no minimo:" <<"\n" << vendas_min << " ingressos";
    return 0;
    }