#include <iostream>
#include <cstdlib>
#include <utility>

void f(int a[], int b[], int size1, int size2, int* i)
{
	int i2 = 0, r = 0;
	while (*i<size1 && i2<size2)
	{
		if (a[*i] != b[i2])
		{
			(*i)++;
			r = 0;
			i2 = 0;
		}
		else
		{
			i2++;
			r++;
			(*i)++;
		}
		if (r == size2)
		{
			(*i) -= (size2);
			return;
		}
	}
	if (r != size2)
	{
		(*i) = -1;
	}
}


int main()
{
	setlocale(0, "");
	int size1 = 0, size2 = 0, i = 0;
	int a[10000] = { 0 }, b[10000] = { 0 };
	std::cout << "Размер массива A: ";
	std::cin >> size1;
	std::cout << "Размер массива B: ";
	std::cin >> size2;

	for (int i = 0; i < size1; i++)
	{
		a[i] = rand() % 9 + 1;
	}
	for (int i = 0; i < size2; i++)
	{
		b[i] = rand() % 9 + 1;
	}

	for (int i = 0; i < size1; i++)
	{
		std::cout << a[i];
	}
	std::cout << '\n';
	for (int i = 0; i < size2; i++)
	{
		std::cout << b[i];
	}
	std::cout << '\n';

	f(a, b, size1, size2, &i);

	std::cout << '\n';
	std::cout << i << '\n'; 
	if (i >= 0)
	{
		std::cout << &a[i] << '\n';
	}

	system("pause");
	return 0;
}