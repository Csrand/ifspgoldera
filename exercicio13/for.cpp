#include <iostream>
using namespace std;

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
