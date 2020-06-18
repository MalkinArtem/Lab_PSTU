#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));

	int a[100];

	int n;
	cout << "Введите количество элементов массива n = ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100 - 50;
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	int k;
	cout << "Введите номер элемента k = ";
	cin >> k;
	k--;


	for (int i = k; i < n - 1; i++)
	{
		a[i] = a[i + 1];
		}

	n--;

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}



	cout << endl;

	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			for (int j = n; j > i; j--)
			{
				a[j] = a[j - 1];
			}
			a[i + 1] = 0;
			n++;
			i++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;
	system("pause");
}

