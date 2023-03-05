//Дана матрица. Составить массив, каждый элемент которого равен максимальному
//элементу соответствующей строки матрица.
#include <iostream>
#include <array>
int main() {
	const int ncols = 3;
	const int nrows = 3;
	
	int str, max = 0;
	std::array <std::array <int, ncols>, nrows> mat;
	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncols; j++) {
			std::cin >> mat[i][j];
		}

	}
	std::cout << std::endl;
	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncols; j++) {
			if (max < mat[i][j]) {
				max = mat[i][j];
			}
		}
		for (int j = 0; j < ncols; j++) {
			mat[i][j] = max;
		}

	}

	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncols; j++) {
				std::cout << mat[i][j] << " ";
		}
		std::cout << std::endl;
	}

}