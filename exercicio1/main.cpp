#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	int b;
	std::cout << "digite um numero"<<std::endl;
	std::cin >> a;
	std::cout << "digite outro numero"<<std::endl;
	std::cin >> b;
	std::cout << "resultado\n"<< a + b <<std::endl;
	return 0;
}
