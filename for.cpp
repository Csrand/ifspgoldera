#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	 cout<<"Digite um numero "<<"\n";
	 cin>>n;
	 for(int i = 1; i<=10; i++) {
	 	int resultado = n * i;
	 	cout << n << "x" << i <<" = "<<resultado <<"\n";
	 }
	 

	
	return 0;
}
