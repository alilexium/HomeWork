//Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести
//на экран матрицу, описывающую следующие сущности. Предложите свой вариант.
//Состояние робота на шахматной доске. Робот характеризуется уровнем заряда, скоростью движения.

#include<iostream>
#include<array>
struct Haracteristika
{
	int power;
	int speed;
};
const int rows = 7;
const int cols = 7;
void func(std::array<std::array<Haracteristika, cols>, rows> doska)
{
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			std::cout << doska[j][i].power << "/" << doska[j][i].speed << " ";
		}
		std::cout << std::endl;
	}
}
int main()
{
	std::array<std::array<Haracteristika, cols>, rows> doska;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << "Power: ";
			std::cin >> doska[j][i].power;
			std::cout << "Speed: ";
			std::cin >> doska[j][i].speed;
		}
	}
	std::cout << std::endl;
	func(doska);
	return 0;
}
