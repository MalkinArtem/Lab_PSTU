#include <iostream>
using namespace std;

// факториал числа
int factorial(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; i++)
		sum *= i;
	return sum;
}

// вычисление элемента ряда
double func(double x, int n)
{
	double res = pow(log(3), n) * pow(x, n) / factorial(n);
	return res;
}

int main()
{
	double a = 0.1, b = 1.0, eps = 0.0001; // отрезок и точность
	int n = 10, k = 10;
	double x = a, dx = (b - a) / k; // шаг
	double SN, SE, curr;
	for (int i = 0; i <= k; i++) // цикл смены аргумента
	{
		SN = 0, curr = 1;
		for (int i = 1; i <= n; i++)	// арифмитический цикл для заданного n
		{
			SN += curr;
			curr = func(x, i);
		}
		SE = 0, curr = 1;
		for (int i = 1; curr > eps; i++)	// итерационный цикл для заданной точности
		{
			SE += curr;
			curr = func(x, i);
		}
		curr = pow(3, x);	// текущее значение
		printf("X = %6.5f\tSN = %6.5f\tSE = %6.5f\tY = %6.5f\n", x, SN, SE, curr);
		x += dx;
	}
	return 0;
}