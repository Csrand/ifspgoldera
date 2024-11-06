#include <iostream>

using namespace std;

int main() {
    int estoque,max,min;
    float estoqueMedio;

    cout << "Digite a quantidade em estoque: ";
    cin >> estoque;
    cout << "Digite a quantidade máxima em estoque: ";
    cin >> max;
    cout << "Digite a quantidade mínima em estoque: ";
    cin >> min;

    estoqueMedio = (max + min) / 2.0;

    cout << "Quantidade média: " << estoqueMedio << endl;

    if (estoque >= estoqueMedio) {
        cout << "Não efetuar compra" << endl;
    } else {
        cout << "Efetuar compra" << endl;
    }

    return 0;
}
