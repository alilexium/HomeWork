//��������, ����������� ���������� ������� � ���������� ��� �� ����� � �������
//�� ����� �������, ����������� ��������� ��������. ���������� ���� �������.
//��������� ������ �� ��������� �����. ����� ��������������� ������� ������, ��������� ��������.

#include<iostream>
#include<array>
struct Haracteristika
{
	int power;
	int speed;
};
const int rows = 3;
const int cols = 3;
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