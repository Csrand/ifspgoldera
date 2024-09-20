#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int nota1, nota2, nota3, peso1, peso2, peso3;
    float media;
        cout << "Calcule sua media!" << "\n";
        cout <<"informe a primeira nota:" <<"\n";
            cin >> nota1;
        cout <<"informe o peso da nota:" <<"\n";
            cin >> peso1;
        cout <<"informe a segunda nota:" <<"\n";
            cin >> nota2;
        cout <<"informe o peso da nota:" <<"\n";
            cin >> peso2;
        cout <<"informe a terceira nota:" <<"\n";
            cin >> nota3;
        cout <<"informe o peso da nota:" <<"\n";
            cin >> peso3;
    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (float)(peso1 + peso2 + peso3);
        cout << fixed << setprecision(2); 
        cout << "Sua media e:" <<"\n" << media;
    return 0;
}
