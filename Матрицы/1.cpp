//Преобразовать матрицу: элементы строки, в которой находится минимальный
//элемент матрицы, заменить нулями.

#include <iostream>
#include <array>
int main() {
	const int ncols = 3;
	const int nrows = 3;
	int minstr = 0, min;
	std::array <std::array <int, ncols>, nrows> mat;
	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncols; j++) {
			std::cin >> mat[i][j];
			 min = mat[0][0];
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncols; j++) {
			if (min > mat[i][j]) {
				min = mat[i][j];
				minstr = i;
			}
		}
	}
	std::cout << minstr << std::endl;
	for (int i = 0; i < ncols; i++) {
			mat[minstr][i] = 0;
	}
	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncols; j++) {
			std::cout << mat[i][j]<< " ";
		}
		std::cout << std :: endl;
	}
}
