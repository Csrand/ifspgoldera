#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um Número: ";
    cin >>n;
    
    if (n %2 == 0){     
        cout << "Par!\n";
    }
     else {
        cout << "Ímpar!\n";
    }
    return 0;
}