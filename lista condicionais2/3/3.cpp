#include <iostream>
using namespace std;
int main(){
    float n1;
    cout << "Digite um Número: ";
    cin >> n1;

    if ( n1<=10){
        cout << "F1\n";
        return 0;
    }
    if (n1>10 && n1 <= 100){
        cout << "F2\n";
        return 0;
    }
    else{
        cout << "F3\n";
        return 0;
    }
 return 0;   
}
