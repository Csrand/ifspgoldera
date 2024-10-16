#include<iostream>
using namespace std;
 int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int n1, n2, n3, maior, menor, meio;
    cout << "Digite um numero: ";
    cin >> n1;
    cout << "Digite outro numero: ";
    cin >> n2;
    cout << "Digite outro numero: ";
    cin >> n3;
    if (n1 >= n2){
        if(n1 >= n3){
            maior = n1;
            if(n2>=n3){
                meio = n2;
                menor = n3;

            }
            else{
                meio = n3;
                menor = n2;            }
        }
        else{
            meio = n1;
            menor = n2;
            maior = n3;
        }
    }
    else{
        if(n2 >=n3){
            maior = n2;
            if(n1>=n3){
                meio = n1;
                menor = n3;
            }
            else{
                meio = n3;
                menor = n1;
            }

        }
        else{
            menor = n1;
            meio = n2;
            maior = n3;

        }
    }
    cout << "Seus numeros em ordem decrescente:\n";
    cout << maior << " " << meio << " " << menor <<"\n";
    return 0;
}