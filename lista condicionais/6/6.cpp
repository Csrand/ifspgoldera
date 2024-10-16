#include <iostream>

using namespace std;

int main() {
    int idade, sexo;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Digite o número correspondente ao sexo (1 para mulher, 2 para homem): ";
    cin >> sexo;

    switch (sexo) {
        case 1: // Mulher
            if (idade >= 60) {
                cout << "Você pode se aposentar." << endl;
            } else {
                cout << "Você ainda não pode se aposentar." << endl;
            }
            break;
        case 2: // Homem
            if (idade >= 65) {
                cout << "Você pode se aposentar." << endl;
            } else {
                cout << "Você ainda não pode se aposentar." << endl;
            }
            break;
        default:
            cout << "Sexo inválido. Use 1 para mulher e 2 para homem." << endl;
            break;
    }

    return 0;
}

