#include <iostream>

using namespace std;

int main()

{
	setlocale(LC_ALL, "rus");

	int sum = 0;

	for (int i = 0; i < 200; i++)

	{

		if (i % 3 == 0)

			sum += i;

	}

	cout << "Сумма = " << sum;

	cout << endl;

	system("pause");

}
