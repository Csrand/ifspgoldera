#include <iostream>
using namespace std;

int main() {
    int voto, total_votos = 0;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0; 
    int nulo = 0, branco = 0;                         

    cout << "Digite os votos (1-6 para candidatos, 7 para nulo, 8 para branco, 0 para encerrar):\n";

    do {
        cin >> voto;

        switch (voto) {
            case 1:
                c1++;
                total_votos++;
                break;
            case 2:
                c2++;
                total_votos++;
                break;
            case 3:
                c3++;
                total_votos++;
                break;
            case 4:
                c4++;
                total_votos++;
                break;
            case 5:
                c5++;
                total_votos++;
                break;
            case 6:
                c6++;
                total_votos++;
                break;
            case 7:
                nulo++;
                total_votos++;
                break;
            case 8:
                branco++;
                total_votos++;
                break;
            default:
                cout << "Código inválido! Tente novamente.\n";
                break;
        }
    } while (voto != 0);

    cout << "\nResultados da Eleição:\n";
    cout << "Candidato 1: " << c1 << " votos\n";
    cout << "Candidato 2: " << c2 << " votos\n";
    cout << "Candidato 3: " << c3 << " votos\n";
    cout << "Candidato 4: " << c4 << " votos\n";
    cout << "Candidato 5: " << c5 << " votos\n";
    cout << "Candidato 6: " << c6 << " votos\n";
    cout << "Votos nulos: " << nulo << "\n";
    cout << "Porcentagem de votos nulos: " << (nulos * 100.0 / total_votos) << "%\n";
    cout << "Votos em branco: " << branco << "\n";
    cout << "Porcentagem de votos em branco: " << (brancos * 100.0 / total_votos) << "%\n";

    return 0;
}
