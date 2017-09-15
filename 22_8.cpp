#include <iostream>
#include <cstdlib>
#include <utility>

void min(int a[], int size1, int* result)
{
	*result = 20000000;
	for (int i = 0; i < size1; i++)
	{
		if (a[i] < *result)
		{
			*result = a[i];
		}
	}
}

void max(int a[], int size1, int* result)
{
	*result = 0;
	for (int i = 0; i < size1; i++)
	{
		if (a[i] > *result)
		{
			*result = a[i];
		}
	}
}

void avg(int a[], int size1, int* result)
{
	max(a, size1, result);
	int max = *result;
	min(a, size1, result);
	int min = *result, avg= (min+max)/2;
	int b = 0, l = 0;
	for (int i = 1; i < size1; i++)
	{
		for (int i2 = 0; i2 < size1; i2++)
		{
			if (a[i2] == avg)
			{
				*result = a[i];
				break;
			}
			else if (a[i2]==avg+i)
			{
				b = i;
			}
		}
		for (int i2 = 0; i2 < size1; i2++)
		{
			if (a[i2] == avg)
			{
				*result = a[i];
				break;
			}
			else if (a[i2] == avg - i)
			{
				l = i;
			}
		}
	}
	if (l <= b)
	{
		*result = avg - l;
	}
	else
	{
		*result = avg +  b;
	}

	//*result = avg;
}





void action(int a[], int size1, int* result, void(*p)(int*, int, int*))
{
	p(a, size1, result);
}


int main()
{
	setlocale(0, "");
	int size1 = 0, g = -1, result = 0;
	int a[10000] = { 0 };
	std::cout << "Размер массива: ";
	std::cin >> size1;
	std::cout << "1 - MIN, 2 - MAX, 3 - AVG: ";
	std::cin >> g;

	void(*p1)(int*, int, int*);
	void(*p2)(int*, int, int*);
	void(*p3)(int*, int, int*);
	p1 = min;
	p2 = max;
	p3 = avg;

	for (int i = 0; i < size1; i++)
	{
		a[i] = rand() % 100 + 1;
	}
	

	for (int i = 0; i < size1; i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << '\n';

	if (g == 1)
	{
		action(a, size1, &result, p1);
	}
	else if (g == 2)
	{
		action(a, size1, &result, p2);
	}
	else if (g == 3)
	{
		action(a, size1, &result, p3);
	}
	else 
	{
		std::cout << "Введена какая то некорректная фигня" << '\n';
	}
	std::cout << result << '\n';
	//action(a, size1, p1);




	system("pause");
	return 0;
}