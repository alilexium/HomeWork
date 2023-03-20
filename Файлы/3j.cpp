//Протабулировать функцию
#include <iostream>
#include <fstream>
float funcTab(int i_parametr_ch, int xmin, float y, float x)
{
    int iznam = 3;
    int stepen = 2;
    y = x + ((xmin^stepen) / iznam);
    while (iznam < (i_parametr_ch+1))
    {
            stepen++;
            iznam++;
            y += (xmin ^ stepen) / (iznam);
    }
    return y;
}
int main()
{
    int xmin;
    int xmax;
    int i_parametr_ch;
    int tab;
    float x;
    float y = 0;
    std::fstream fin("in.txt", std::ios::in);
    if (!fin.is_open()) {
        std::cout << "File is not open";
        return -1;
    }
    if (fin.is_open())
        fin >> xmin >> xmax >> i_parametr_ch >> tab;
    fin.close();
    std::fstream fout("out.txt", std::ios::out);
    if (fout.is_open())
    {
        for (; xmin < xmax; xmin += tab)
        {
            fout << xmin << "," << funcTab(i_parametr_ch, xmin, y, x) << '\n';
        }
    }
    fin.close();

    return 0;
}
