#include <iostream>
using namespace std;
int main(){
    float n1,n2,n3,n4,notaExame,media;
    cout << "Digite sua primeira nota: ";
    cin >> n1;
    cout << "Digite sua segunda nota: ";
    cin >> n2;
    cout << "Digite sua terceira nota: ";
    cin >> n3;
    cout << "Digite sua quarta nota: ";
    cin >> n4;
    media = (n1 + n2 + n3 + n4)/4;
    if(media >=7){
        cout << "Aprovado!!\n";
        return 0;
    }
    cout << "Digite a nota do Exame final: ";
    cin >> notaExame;
    media = (n1 + n2 + n3 + n4 + notaExame)/5;
    if(media>=5){
        cout << "Aprovado!!\n";
    }
    else{
        cout << "Reprovado!!\n";
    }
    return 0;
}