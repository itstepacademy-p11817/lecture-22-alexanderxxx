#include <iostream>
#include <cstdlib>
#include <utility>

void f(int m[], int size, int* n, int* o, int* p)
{
	for (int i = 0; i < size; i++)
	{
		if (m[i] > 0)
		{
			(*p)++;
		}
		else if (m[i] < 0)
		{
			(*o)++;
		}
		else
		{
			(*n)++;
		}
	}
}


int main()
{
	setlocale(0, "");
	int size = 0, n = 0, o = 0, p = 0;
	int m[10000] = { 0 };
	std::cout << "Размер массива: ";
	std::cin >> size;
	for (int i = 0; i < size; i++)
	{
		m[i] = rand() % 18 - 9;
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << m[i];
	}
	std::cout << '\n';
	f(m, size, &n, &o, &p);
	std::cout << n << " нулевых" << '\n' << o << " отрицательных" << '\n' << p << " положительных";
	std::cout << '\n';
	system("pause");
	return 0;
}