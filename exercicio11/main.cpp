#include<iostream>
using namespace std;
int main(){
    int num, quadrado, cubo;
    cout << "*****************************" << "\n";
    cout << "******** CALCULADORA ********" << "\n";
    cout << "************ DE *************" << "\n";
    cout << "*********** CUBO ************" << "\n";
    cout << "************ E **************" << "\n";
    cout << "********* QUADRADO **********" << "\n";
    cout << "*****************************" << "\n";
    cout << "Digite um numero:" << "\n";
    cin >> num;
     quadrado = num * num;
     cubo = num * num * num;
    cout <<"O seu numero elevado ao quadrado e:" <<"\n" << quadrado << "\n";
    cout <<"O seu numero elevado ao cubo e:" <<"\n" << cubo << "\n";
    return 0;
    }
