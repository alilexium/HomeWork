//Дана матрица. Элементы первой строки — мощность электромотора, второй строки
//— категория мотора(число от 1 до 3).Найти самый мощный мотор категории 3.
#include <iostream>
#include <array>
int main() {
	const int ncols = 5;
	const int nrows = 2;
	int  max, max1;
	std::array <std::array <int, ncols>, nrows> mat;
	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncols; j++) {
			std::cin >> mat[i][j];
			max = mat[0][0];
		}
	}
	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncols; j++) {
			if (mat[1][j] == 3) {
				if (max < mat[0][j]) {
					max = mat[0][j];
				}
			}
		}
	}
	std::cout << max;
}
