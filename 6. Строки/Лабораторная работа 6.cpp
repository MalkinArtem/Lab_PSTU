#include <iostream>
#include <cstring>

using namespace std;

int main()
{

	setlocale(LC_ALL, "rus");

	char s[255];
	cout << "Введите предложение: ";
	gets_s(s);
	string str;
str = s;
	
int len = str.length();
int a = 0;
for (int i = 0; i < len / 2; ++i)
	{
		if (s[i] != s[len - i - 1])
		{
			a = 1;
			break;
		}	
	}

	if (a == 0)
	{
		cout << "Это палиндром";
	}
	else 
		cout << "Это НЕ палиндром";

	return 0;
	system("pause");
}

