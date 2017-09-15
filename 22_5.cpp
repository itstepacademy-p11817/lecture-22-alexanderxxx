#include <iostream>
#include <cstdlib>
#include <utility>

void f(int m1[], int m2[], int m3[], int size)
{
	for (int i = 0; i < size; i++)
	{
		m3[i] = m1[i] + m2[i];
	}
}


int main()
{
	setlocale(0, "");
	int size = 0;
	int m1[10000] = { 0 }, m2[10000] = { 0 }, m3[10000] = { 0 };
	std::cout << "Размер массивов: ";
	std::cin >> size;
	for (int i = 0; i < size; i++)
	{
		m1[i] = rand() % 9 + 1;
		m2[i] = rand() % 9 + 1;
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << m1[i];
	}
	std::cout << '\n';
	for (int i = 0; i < size; i++)
	{
		std::cout << m2[i];
	}

	std::cout << '\n';

	f(m1, m2, m3, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << m3[i] << " ";
	}
	std::cout << '\n';
	system("pause");
	return 0;
}