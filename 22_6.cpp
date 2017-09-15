#include <iostream>
#include <cstdlib>
#include <utility>

void f(int a[], int b[], int* size1, int size2)
{
	int i = 0;
	while (i<size2)
	{
		a[*size1] = b[i];
		(*size1)++;
		i++;
	}
}


int main()
{
	setlocale(0, "");
	int size1 = 0, size2 = 0;
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

	f(a, b, &size1, size2);

	std::cout << '\n';
	for (int i = 0; i < size1; i++)
	{
		std::cout << a[i];
	}
	std::cout << '\n';
	

	system("pause");
	return 0;
}