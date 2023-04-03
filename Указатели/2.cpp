#include <iostream>
#include <ctime>
#include <cstdlib>
char Sum(char* a2, char* b2);
void Mult(char* a3, char* b3);
void Change(char*& a1, char*& b1);
int main() {
	char* a1;
	char* b1;
	a1 = new char;
	b1 = new char;
	*a1 = '2';
	*b1 = '3';
	std::cout << std::endl;
	std::cout << a1 << " " << *a1 << std::endl;
	std::cout << b1 << " " << *b1 << std::endl;
	Sum(a1, b1);
	Mult(a1, b1);
	Change(a1, b1);
	delete a1;
	delete b1;
	return 0;
}
char Sum(char* a2, char* b2) {
	return (*a2) + (*b2);
}
void Mult(char* a3, char* b3) {
	char ans1 = a3 - b3;
	std::cout << ans1 << std::endl;
}
void Change(char*& a1, char*& b1) {
	char val;
	val = *a1;
	*a1 = *b1;
	*b1 = val;
	std::cout << "a1 - " << *a1 << std::endl;
	std::cout << "b1 - " << *b1 << std::endl;
}