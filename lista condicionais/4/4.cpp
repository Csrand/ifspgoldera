#include<iostream>
using namespace std;
int main(){
    float nota;
    cout << "Digite sua Nota: \n";
    cin >> nota;
    if (nota<0 || nota>10){
        cout << "Entrada Inválida\n";
        return 1;
    }
    if (nota >= 0 && nota <= 2){
        cout << "Sem Rendimento\n";
        return 0;
    }
    if (nota >= 2.1 && nota <= 4){
        cout << "Baixo Rendimento\n";
        return 0;
    }
    if (nota >= 4.1 && nota <= 6){
        cout << "Rendimento Regular\n";
        return 0;
    }
    if (nota >= 6.1 && nota <= 8.5){
        cout << "Bom Rendimento!\n";
        return 0;
    }
    if (nota >= 8.6 && nota <= 10){
        cout << "Rendimento Excelente!!\n";
        return 0;
    }
    return 0;
}