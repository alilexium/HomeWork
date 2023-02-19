//Составить алгорим, находящий, сколько раз в тексте сочетание "ум" встречается в начале слова.
#include <string>
#include <iostream>
#include <vector>
int main() {
	std::string text;
	char um;
	std::getline(std::cin, text);
	std:: cin >> um;
	std::vector<int> count;
	int coun = 0;
	if (text.at(0) == um) {
		coun = 1;
	}
	for (unsigned int i = 0; i < text.length(); i++) 
	{
		if (((text[i] == ' ') && (text[i + 1] == um)))
		{
			coun++;
		}
	}
	std::cout << coun;
}