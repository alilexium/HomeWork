/*Пользователь вводит данные о студентах: Фамилия, Средняя оценка, Курс.
Организовать запись данных из массива структур в файл в следующем формате: 1
строка Фамилия, 2 строка Средняя оценка, 3 строка Курс. Остальные строки
повторяют тройками эти данные для других студентов. Организовать переменные
для хранения информации.*/
#include <iostream>
#include <fstream>
#include <string>
#include <array>

const int N = 3;

struct Student
{
    std::string surname;
    float sredocenka;
    int kurs;
};

int main()
{
    std::array<Student, N> uchenik;

    std::fstream fin("students.txt", std::ios::in);
    if (!fin.is_open()) {
        std::cout << "File is not open";
        return -1;
    }

    if (fin.is_open())
    {
        for (int i = 0; i < N; i++)
        {
            fin >> uchenik[i].surname >> uchenik[i].sredocenka >> uchenik[i].kurs;
        }
    }
    fin.close();

    for (int i = 0; i < N; i++)
    {
        std::cout << "Student " << i + 1 << std::endl;
        std::cout << uchenik[i].surname << std::endl;
        std::cout << uchenik[i].sredocenka << std::endl;
        std::cout << uchenik[i].kurs << std::endl;
    }
    return 0;
}
