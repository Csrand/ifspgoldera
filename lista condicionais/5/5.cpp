#include<iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float salario, totalVendas, salarioTotal;
    int numero;
    cout << "Digite seu número de identificação: \n";
    cin >> numero;
    cout << "Digite seu Salário fixo: \n";
    cin >> salario;
    cout << "Digite seu Total em vendas: \n";
    cin >> totalVendas;
    // incia a variavel salarioTotal com o valor de salario
    salarioTotal = salario;
    if(totalVendas<=1000){
        salarioTotal += (totalVendas * 0.03);
    }
    if(totalVendas >1000 && totalVendas <= 5000){
        salarioTotal += (totalVendas * 0.05);
    }
    if(totalVendas > 5000){
        salarioTotal += (totalVendas * 0.10);
    }
    cout << "Funcionário N°: " << numero << endl;
    cout << "Seu Total em Vendas esse mês foi de: " << totalVendas << " R$\n";
    cout << "Seu Salário fixo é: " << salario << " R$\n";
    cout << "Seu Salário Total esse mês é de: " << salarioTotal << " R$\n";

    return 0;
}
