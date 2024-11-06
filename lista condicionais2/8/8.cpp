#include <iostream>
#include <cmath> // Para a função de potenciação

using namespace std;

int main() {
    int num1, num2, operacao;
    float resultado;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    cout << "Escolha uma das opções:" << endl;
    cout << "1. Adição" << endl;
    cout << "2. Subtração" << endl;
    cout << "3. Multiplicação" << endl;
    cout << "4. Quociente da divisão" << endl;
    cout << "5. Resto da divisão" << endl;
    cout << "6. Potenciação" << endl;
    cout << "7. Média aritmética" << endl;
    cout << "Opção: ";
    cin >> operacao;

    // Switch case para escolher a operação
    switch(operacao) {
        case 1:
            resultado = num1 + num2;
            cout << "Resultado da adição: " << resultado << endl;
            break;
        case 2:
            resultado = num1 - num2;
            cout << "Resultado da subtração: " << resultado << endl;
            break;
        case 3:
            resultado = num1 * num2;
            cout << "Resultado da multiplicação: " << resultado << endl;
            break;
        case 4:
            if (num2 != 0) {
                resultado = static_cast<double>(num1) / num2; // Converte para double para divisão exata
                cout << "Resultado do quociente da divisão: " << resultado << endl;
            } else {
                cout << "Erro: divisão por zero." << endl;
            }
            break;
        case 5:
            if (num2 != 0) {
                resultado = num1 % num2;
                cout << "Resultado do resto da divisão: " << resultado << endl;
            } else {
                cout << "Erro: divisão por zero." << endl;
            }
            break;
        case 6:
            resultado = pow(num1, num2);
            cout << "Resultado da potenciação: " << resultado << endl;
            break;
        case 7:
            resultado = (num1 + num2) / 2.0;
            cout << "Resultado da média aritmética: " << resultado << endl;
            break;
        default:
            cout << "Erro: opção inválida!" << endl;
    }

    return 0;
}
