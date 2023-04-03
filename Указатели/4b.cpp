#include <iostream>
#include <ctime>
#include <cstdlib>
const int n = 3;
struct Airplane
{
	double speed;
	int count_people;
};
void Change(Airplane* haracter, const int n) {
	for (int i = 0; i < n; i++) {
		haracter[i].count_people += 13;
		haracter[i].speed += 2.8;
	}
}
int main() {
	Airplane* haracter = nullptr;
	haracter = new Airplane[n];
	for (int i = 0; i < n; i++) {
		haracter[i].count_people = rand() % 100;
		haracter[i].speed = rand() / 100 / (1.0 + rand() % 10);
		std::cout << &haracter[i] << " : speed -  " << haracter[i].speed << " count of people - " << haracter[i].count_people << std::endl;
	}
	std::cout << std::endl;
	Change(haracter, n);
	for (int i = 0; i < n; i++) {
		std::cout << &haracter[i] << " : speed -  " << haracter[i].speed << " count of people - " << haracter[i].count_people << std::endl;
	}
	delete[] haracter;
	return 0;
}