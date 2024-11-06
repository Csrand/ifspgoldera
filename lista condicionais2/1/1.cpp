#include <iostream>
using namespace std;
int main(){
    float n1, n2, media;
    cout << "Digite sua primeira nota: ";
    cin >> n1;
    cout << "Digite sua segunda nota: ";
    cin >> n2;
    media = (n1 + n2)/2;
    if (media >=7){
        cout << "O aluno obteve média " << media << " e esta aprovado!\n";
    }
    else{
     cout << "O aluno obteve média " << media << " e esta reprovado!\n";
    }
 return 0;   
}