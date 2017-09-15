#include <iostream>
#include <cstdlib>
#include <utility>

void f(int m[], int size, int* summ, int* pr)
{
	for (int i = 0; i < size - 1; i++)
	{
		*summ += m[i];
		*pr *= m[i];
	}
	//int* s = &summ;
	//int* p = &pr;
	//return &summ, &pr;
}


int main()
{
	setlocale(0, "");
	int size = 0, summ = 0, pr = 1;
	int m[10000] = { 0 };
	std::cout << "Размер массива: ";
	std::cin >> size;
	for (int i = 0; i < size; i++)
	{
		m[i] = rand() % 9 + 1;
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << m[i];
	}
	std::cout << '\n';
	f(m, size, &summ, &pr);
	std::cout << summ << '\n' << pr;
	std::cout << '\n';
	system("pause");
	return 0;
}