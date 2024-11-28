#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    float soma = 0; 
    float numerador = 1; 
    float denominador = 1; 

    cout << "Soma = ";

    for (int i = 1; i <= 50; i++) {
        float termo = numerador / denominador; 
        soma += termo;

       
        cout << numerador << "/" << denominador;
        if (i < 50) {
            cout << " + ";
        }

        numerador += 2; 
        denominador += 1; 
    }


    cout << " = " << fixed << setprecision(2) << soma << endl;

    return 0;
}
