#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int numeroDependentes;
    float salarioBruto, salarioLiquido, descontoINSS;

    cout << "Informe seu salário bruto: \n";
    cin >> salarioBruto;

    cout << "Informe o número de dependentes: \n";
    cin >> numeroDependentes;

    // Cálculo do desconto de INSS
    if (salarioBruto >= 3501) {
        descontoINSS = salarioBruto * 0.11;
    }
    if (salarioBruto >= 1501 && salarioBruto < 3501) {
        descontoINSS = salarioBruto * 0.10;
    }
    if (salarioBruto > 671 && salarioBruto < 1501) {
        descontoINSS = salarioBruto * 0.09;
    }
    if (salarioBruto <= 671) {
        descontoINSS = salarioBruto * 0.08;
    }

    // Cálculo do salário líquido
    salarioLiquido = salarioBruto - descontoINSS + (15 * numeroDependentes) + 40 + 100;

    cout << fixed << setprecision(2);
    cout << "Seu salário líquido é: R$ " << salarioLiquido << "\n";

    return 0;
}
