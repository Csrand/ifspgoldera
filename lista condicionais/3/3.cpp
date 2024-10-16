#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int numeroDependentes;
    float salarioBruto,salarioLiquido;
    cout << "Informe seu salário bruto: \n";
    cin >> salarioBruto;
    cout << "Informe o numero de dependentes: \n";
    cin >> numeroDependentes;
 
    if(salarioBruto>671){
        if(salarioBruto >=1501){
            if(salarioBruto>=3501){
                salarioLiquido = salarioBruto - (salarioBruto * 0.11) + (15 * numeroDependentes) + 40 + 100;   
            }
            else{
                salarioLiquido = salarioBruto - (salarioBruto * 0.10) + (15 * numeroDependentes) + 40 + 100;   
            }
        }
        else{
            salarioLiquido = salarioBruto - (salarioBruto * 0.09) + (15 * numeroDependentes) + 40 + 100;   
        } 
    }
    else{
        salarioLiquido = salarioBruto - (salarioBruto * 0.08) + (15 * numeroDependentes) + 40 + 100;   
    }
    cout << fixed << setprecision(2);
    cout << "Seu salário líquido é:  "<< salarioLiquido << "\n";
    
    return 0;
}