#include <iostream>


using namespace std;

int main()

{

	float a = 1000;

	float b = 0.0001;

	float res;

	res = ((a * a + 2 * a * b + b * b) - (a * a + 2 * a * b)) / (b * b);

	cout << "Float = " << res << endl;

	double a1 = 1000;

	double b1 = 0.0001;

	double res1;

	res1 = ((a1 * a1 + 2 * a1 * b1 + b1 * b1) - (a1 * a1 + 2 * a1 * b1)) / (b1 * b1);

	cout << "Double = " << res1 << endl;

	system("pause");

	return 0;


}
