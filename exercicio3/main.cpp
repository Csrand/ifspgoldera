#include<iostream>
using namespace std;
int main(){
    int idade, ano_nascimento, ano_atual;
    cout << "Digite o ano que voce nasceu:" <<"\n";
    cin >> ano_nascimento;
    cout << "Digite o ano atual:" <<"\n";
    cin >> ano_atual;
    idade = ano_atual - ano_nascimento;
    cout << "Sua idade e:" <<"\n" << idade;
    return 0;

}