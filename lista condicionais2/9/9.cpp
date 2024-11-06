#include <iostream>
#include <string>

using namespace std;

int main() {
    string produto;
    int quantidade;
    float valor, total, desconto, valorTotal;

    cout << "Digite a descrição do produto: ";
    getline(cin, produto);
    cout << "Digite a quantidade adquirida: ";
    cin >> quantidade;
    cout << "Digite o preço unitário: ";
    cin >> valor;

    total = quantidade * valor;
    desconto = 0;

    if (quantidade <= 5) {
        desconto = total * 0.02; 
    }
    if (quantidade > 5 && quantidade <= 10) {
        desconto = total * 0.03; 
    }
    if (quantidade > 10) {
        desconto = total * 0.05; 
    }

    valorTotal = total - desconto;

    cout << "Descrição do produto: " << produto << endl;
    cout << "Total sem desconto: R$ " << total << endl;
    cout << "Desconto aplicado: R$ " << desconto << endl;
    cout << "Total a pagar: R$ " << valorTotal << endl;

    return 0;
}

