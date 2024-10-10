#include<iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float p1, p2, p3, p4, p5, cargaMaxima, total;
    cout << "Digite a capacidade maxíma do elevador: \n";
    cin >> cargaMaxima;
    cout << "Digite o peso da primeira pessoa: \n";
    cin >> p1;
    cout << "Digite o peso da segunda pessoa: \n";
    cin >> p2;
    cout << "Digite o peso da terceira pessoa: \n";
    cin >> p3;
    cout << "Digite o peso da quarta pessoa: \n";
    cin >> p4;
    cout << "Digite o peso da quinta pessoa: \n";
    cin >> p5;

    total = p1 + p2 + p3 + p4 + p5;
    if(total <= cargaMaxima){
        cout <<"Pode Subir!\n";
    }
    else{
        cout <<" Não Pode Subir!\n";
        cout <<" Sobrecarga!\n";
    }
return 0;
}