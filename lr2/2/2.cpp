#include <iostream>
using namespace std;
int main(){
    int crianca, adulto, adolescente, idoso, qsevasco, i, idade;
    double pctgkid, pctgadole, pctgidoso, pctgqsevasco, pctgadulto;
    crianca = 0;
    adulto = 0;
    adolescente = 0;
    idoso = 0;
    qsevasco = 0;

    for( i=0; i < 15; i++){
        cout << "Digite sua Idade: ";
        cin >> idade;
        if(idade >= 1 && idade<=15){
            crianca += 1;
        }
        if(idade >= 16 && idade<=30){
            adolescente += 1;
        }
        if(idade >= 31 && idade<=45){
            adulto += 1;
        }
        if(idade >= 46 && idade<=60){
            idoso += 1;
        }
        if(idade >= 61){
            qsevasco += 1;
        }
    }

    pctgkid =( crianca / 15.0)*100;
    pctgadulto = (adulto / 15.0)*100;
    pctgadole = (adolescente / 15.0)*100;
    pctgidoso = (idoso / 15.0)*100;
    pctgqsevasco = (qsevasco / 15.0)*100;
    cout << "O total de pessoas abaixo de 15 anos é: " << crianca <<" que representa " << pctgkid << "%" << " da faixa etária do grupo\n";
    cout << "O total de pessoas com a idade acima de 16 anos e menos que 30 é: " << adolescente <<" que representa " << pctgadole <<"%" " da faixa etária do grupo\n";
    cout << "O total de pessoas com a idade acima de 31 anos e menos que 45 é: " << adulto <<" que representa " << pctgadulto <<"%" << " da faixa etária do grupo\n"; 
    cout << "O total de pessoas com a idade acima de 46 anos e menos que 60 é: " << idoso <<" que representa " << pctgidoso <<"%" << " da faixa etária do grupo\n"; 
    cout << "O total de pessoas com a idade acima de 61 anos é: " << qsevasco <<" que representa " << pctgqsevasco <<"%" << " da faixa etária do grupo\n";      
    return 0;
}