//Удалить из строки первые буквы слов
#include <string>
#include <iostream>
#include <vector>
int main() {
	std::string text;
	std::getline(std::cin, text);
	text.erase(0, 1);
	for (unsigned int i = 0; i < text.length(); i++) {
		if (text[i] == ' ') {
			text.erase(i+1, 1);
		}
	}
	std::cout << text;
	return 0;
}