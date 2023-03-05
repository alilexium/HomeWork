//Сосчитать количество чёрных пятен на белой шкуре. Шкуру представить
//в виде 0 и 1 матрицы, где 0 - белый, а 1 - чёрный цвет.
#include <iostream>
#include <array>
#include <ctime>
int main() {
	const int ncols = 5;
	const int nrows = 5;
	int black = 0;
	std::array <std::array <int, ncols>, nrows> mat;
	srand(time(NULL));
	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncols; j++) {
			mat[i][j] = rand() % 2;
			if (mat[i][j] == 0) {
				black++;
			}
		}
	}
	std::cout << " matric" << std::endl;
	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncols; j++) {
			std::cout << mat[i][j] << " ";
		}
		std::cout << std::endl;

	}
	std::cout << black;
	return 0;
}
