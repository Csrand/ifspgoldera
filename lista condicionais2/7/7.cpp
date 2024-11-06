#include <iostream>
using namespace std;
int main(){
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;
    if( idade >=18){
        cout << "Categoria Senior\n";
        return 0;
    }
    if( idade >=14 && idade <=17){
        cout << "Categoria Juvenil B\n";
        return 0;
    }
    if( idade >=11 && idade <=13){
        cout << "Categoria Juvenil a\n";
        return 0;
    }
    if( idade >=8 && idade <=10){
        cout << "Categoria Infantil B\n";
        return 0;
    }
    if( idade >=5 && idade <=7){
        cout << "Categoria Infantil A\n";
        return 0;
    }
    return 0;
}