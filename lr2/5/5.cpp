#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, i, d, tprimos = 0;

    cout << "Digite 10 números inteiros:\n";
    for (int i = 0; i < 10; i++) {
        cin >> n;
        bool primo = true;

        if (n <= 1) {
            primo = false; // 
        } else {
            for (int d = 2; d <= sqrt(n); d++) {
                if (n % d == 0) {
                    primo = false;
                    break; 
                }
            }
        }

        if (primo) {
            tprimos++; 
        }
    }

    cout << "Quantidade de números primos: " << tprimos << endl;
    return 0;
}

