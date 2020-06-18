#include <iostream>
#include <cstring>
#include <Windows.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNING_


using namespace std;



void readMatr(char** matr, int& n)
{
	do
	{
		cout << "Количество строк: ";
		cin >> n;
		if (n > 0)
			break;
		cout << "Должно быть больше 0" << endl;
	} while (true);
	cout << "\nВведите строки:" << endl;
	char s[60];

	cin.getline(s, 60, '\n'); 	
	for (int i = 0; i < n; i++)
	{
		do
		{
			cin.getline(s, 60, '\n');
			if (strlen(s) > 0 && strlen(s) <= 60 && s[strlen(s) - 1] == '0')
				break;
			cout << "Длина строки от 1 до 60 и заканчивается 0" << endl;
		} while (true);
		matr[i] = new char[strlen(s)];
		strcpy(matr[i], s);
	}
}


void printMatr(char** matr, int n)
{
	for (int i = 0; i < n; i++)
		cout << matr[i] << endl;
}


void getRes(char* buf, char** matr, int n)
{
	int prev, curr, k = 0;
	for (int i = 0; i < n; i++)
	{
		buf[k++] = '(';
		curr = prev = 0;
		do
		{
			while (matr[i][curr] == '0')			
				curr++;
			if (curr == strlen(matr[i]))		
				break;
			prev = curr;
			while (matr[i][curr] != '0')		
				curr++;
			for (; prev != curr; prev++)	
				buf[k++] = matr[i][prev];
			buf[k++] = ',';
		} while (true);
		if (k != 1)		
			k--;
		buf[k++] = ')';
		if ((i + 1) != n)	
			buf[k++] = ',';
	}
	buf[k] = '\0';		
}

int main()
{
	setlocale(LC_ALL, "rus");

	int n=0;
	char** matr = new char* [n];
	readMatr(matr, n);
	cout << endl;
	printMatr(matr, n);
	cout << endl;
	char buf[255];
	getRes(buf, matr, n);
	cout << "Результат: " << buf << endl;

	return 0;
	system("pause");
}