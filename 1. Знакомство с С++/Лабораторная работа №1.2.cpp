#include <iostream>

using namespace std;

int main()

{

	setlocale(LC_ALL, "rus");

	int n, m;

	cout << "Введите n: ";

	cin >> n;

	cout << "Введите m: ";

	cin >> m;

	int res1 = ++n + m;

	cout << "n++ + m = " << res1 << endl;

	bool res2 = --m > m;

	cout << "m-- > m = " << res2 << endl;

	bool res3 = --n > m;

	cout << "n-- > m = " << res3 << endl;

	system("pause");

	return 0;

}

