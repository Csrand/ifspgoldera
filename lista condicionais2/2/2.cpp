#include <iostream>
using namespace std;

int main() {
    char letra;
    cout << "Digite uma letra: ";
    cin >> letra;
    
    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || 
        letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "É uma vogal!\n";
    } else {
        cout << "Não é uma vogal!\n";
    }

    return 0;
}
