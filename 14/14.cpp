//���� ������.���� ��� ���������� �� 'abs', �� �������� �� �� 'www', ����� ������� � ����� ������ 'zzz'
#include <iostream>
#include <string>
int main() {
	std::string text;
	std::string pos = "www";
	std::string pos1 = "zzz";
	std::getline(std::cin, text);
	if (text.at(0) == 'a' && text.at(1) == 'b' && text.at(2) == 's') {
		text.replace(0, 3, pos);
	}
	else
	{
		text = text + pos1;
	}
	std::cout << text;
}