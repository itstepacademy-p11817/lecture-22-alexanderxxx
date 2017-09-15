#include <iostream>
#include <cstdlib>
#include <utility>

double sl(double a, double b)
{
	return a + b;
}

double vi(double a, double b)
{
	return a - b;
}

double pr(double a, double b)
{
	return a * b;
}

double del(double a, double b)
{
	return a / b;
}



int main()
{
	setlocale(0, "");
	/*
	double(*d1)(double, double);
	double(*d2)(double, double);
	double(*d3)(double, double);
	double(*d4)(double, double);

	d1 = &sl;
	d2 = &vi;
	d3 = &pr;
	d4 = &del;
	*/
	int i = -1;
	while (i != 4)
	{
		int a = 0, b = 0, c = 0;

		double(*m[4]) (double, double) = { sl,vi,pr,del };


		std::cout << "0 - сложение, 1 - вычитание, 2 - произведенин, 3 - деление, 4 - выход: ";
		std::cin >> i;
		if (i == 4)
		{
			return 0;
		}
		std::cout << "A= ";
		std::cin >> a;
		std::cout << "B= ";
		std::cin >> b;
		c = (*m[i])(a, b);

		std::cout << '\n' << c << '\n';
	}

	

	//system("pause");
	return 0;
}