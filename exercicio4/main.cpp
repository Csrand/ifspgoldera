#include <iostream>
using namespace std;
int main(){
    int peso, em_gramas;
    cout << "Descubra seu peso em gramas!!!" <<"\n";
    cout << "Digite seu peso:"<<"\n";
    cin >> peso;
    em_gramas = peso * 1000;
    cout << "Seu peso em gramas e:" << "\n" << em_gramas <<" gramas";
    return 0;

}