//В данной строке после каждого символа 'a' добавить 'b'
#include <iostream>
#include <string>

int main() {
    std::string text;
    std::getline(std::cin, text);

    std::string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] != 'a') {
            result += text[i];
        }
        if (i < text.length() - 1 && text[i] == 'a') {
            result += text[i];
            result += 'b';
        }
    }
    std::cout << result << std::endl;

    return 0;
}