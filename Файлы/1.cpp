//Чтение заголовков файлов
#include <iostream>
#include <fstream>
#include <cmath>
int main() {
	std::fstream fin;
	fin.open("books.ico", std::ios::binary | std::ios::in);
	if (!fin.is_open()) {
		std::cout << "Error";
		return -1;
	}
	char sign[8];
	fin.read((char*)sign, sizeof(char) * 8);
	fin.close();
	std::cout << sign;
	return 0;
}
