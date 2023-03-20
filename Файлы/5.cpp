/*������������ ������ ������ � ���������: �������, ������� ������, ����.
������������ ������ ������ �� ������� �������� � ���� � ��������� �������: 1
������ �������, 2 ������ ������� ������, 3 ������ ����. ��������� ������
��������� �������� ��� ������ ��� ������ ���������. ������������ ����������
��� �������� ����������.*/
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