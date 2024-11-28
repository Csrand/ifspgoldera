#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double numero;
    
   
    cout << "Digite um número real: ";
    cin >> numero;


    for (int i = 1; i <= 200; i++) {
    
        cout << fixed << setprecision(2); 
        cout << numero << " x " << i << " = " << numero * i;

    
        if (i % 10 == 0) {
            cout << endl;  
        } else {
            cout << "\t";  
        }
    }

    return 0;
}
