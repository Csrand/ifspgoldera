#include <iostream>
using namespace std;
int main(){
    int idade, maior, i;
    maior = 0;
    for( i=0; i < 10; i++ ){
        cout << "Digite sua Idade: ";
        cin >> idade;
        if(idade >= 18){
            maior += 1;
        }
    }
    cout << "O total de pessoas maiores de idade é: " << maior <<endl; 
    return 0;
}