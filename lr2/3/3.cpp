#include <iostream>
using namespace std;
int main(){
    int n, maior, menor;
    maior = 0;
    menor = 99999999;
    do{
        cout << "Informe um número real ou inteiro (Quando quiser parar digite 0)\n";
        cin >> n;
        if(n > maior && n != 0){
            maior = n;
        }if( n > 0 && n < menor){
            menor = n;
        }
        if(n < 0 ){
            cout << " Esses valores (zero e negativos) não entrarão nos cálculos.\n";
            cout << "Informe outro Número\n";
        }
    } while (n != 0);
    cout << "O maior número digitado foi: " << maior <<" e o menor número foi: " << menor <<endl;
    
    return 0;
}