#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, i, primo;
    primo = 1; 
    cout << "Digite um número: ";
    cin >> n;
    while(n < 0){
        cout << "Digite um número inteiro !!";  
        cin >> n;   
    }
    if (n == 1 || n == 0){
        cout << "Não é primo!\n";
    }
    if (n == 2){
        cout << "É primo!\n";
    }
    for(i = 2; i<=sqrt(n); i++ ){
        if (n % i == 0){
            primo = 0;
        }
    }
    if(primo == 1){
        cout << "É primo!\n";
    }
    else{
        cout << "Não é primo!\n";
    }
    return 0;
}