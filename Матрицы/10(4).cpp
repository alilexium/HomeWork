//4. В квадратной матрице найти сумму положительных элементов, лежащих на и выше
//главной диагонали и расположенных в чётных столбцах.
//Реализовать вычисление матричных норм из списка выше (только для квадратных
//матриц).
#include <iostream>
#include <array>
int norma_mat(std::array<std::array<int, 3>, 3> mat){
	const int ncols = 3;
	const int nrows = 3;
	std::array<int, 3> sum;
	int summ;
	int max = -1;
	for (int i = 0; i < nrows; i++){
		summ = 0;
		for (int j = 0; j < ncols; j++){
			summ += abs(mat[j][i]);
		}
		sum[i] = summ;
	}

	for (int a = 0; a < 3; a++){
		if (sum[a] > max){
			max = sum[a];
		}
	}

	return max;
}
int main() {
	const int ncols = 3;
	const int nrows = 3;
	int sum = 0;
	std::array <std::array <int, ncols>, nrows> mat;
	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncols; j++) {
			std::cin >> mat[i][j];
		}
	}
	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncols; j++) {
			if ((mat[i][j] > -1) && (i >= j) && (j % 2 == 0)) {
				sum += mat[i][j];
			}
		}

	}

	std::cout << "sum = " << sum << std:: endl;
	std::cout << "norma mat = " << norma_mat(mat);
}
