#include <iostream>
#include <ctime>
#include <cstdlib>
void newArr(double*& p, int n);
void fillArr(double* p, int n);
void showArr(double* p, int n);
void removeArr(double* p);
int main() {
	srand(time(NULL));
	double* pArr = nullptr;
	int nsize;
	std::cin >> nsize;
	newArr(pArr, nsize);
	fillArr(pArr, nsize);
	showArr(pArr, nsize);
	removeArr(pArr);
	return 0;
}
void newArr(double*& p, int n) {
	p = new double[n];
}
void fillArr(double* p, int n) {
	for (int i = 0; i < n; i++) {
		p[i] = rand() % 100;
	}
}
void showArr(double* p, int n) {
	for (int i = 0; i < n; i++) {
		std::cout  << p << " " << p[i] << std :: endl;
	}
	std::cout << std::endl;
}

void removeArr(double* p) {
	delete[] p;
}
