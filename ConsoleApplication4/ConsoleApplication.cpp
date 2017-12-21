#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;

char s;

void main()
{

	setlocale(LC_ALL, "RU");
Start:
	cout << "Please enter the number of task" << endl;
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
	{
		int h;
		cout << "Please enter the hours" << endl;
		cin >> h;
		int m;
		cout << "Please enter the minutes" << endl;
		cin >> m;
		int s;
		cout << "Please enter the seconds" << endl;
		cin >> s;
		int hs = h * 3600;
		int ms = m * 60;
		int sreverse = hs + ms + s;
		cout << "Number of seconds since the beginning of the day :" << sreverse << endl;
		cout << "Do you want to continue?(y/n)" << endl;
		cin >> s;
		if (s == 'y')
			goto Start;
		else
			goto Exit;

		break;
	}
	case 2:
	{
		int m;
		cout << "Please enter the month" << endl;
		cin >> m;
		int ms = m * 30;
		cout << "Number of days since the beginning of the year:" << ms << endl;
		cout << "Do you want to continue?(y/n)" << endl;
		cin >> s;
		if (s == 'y')
			goto Start;
		else
			goto Exit;

		break;
	}
	case 3:
	{
		int m;
		cout << "Please enter the month" << endl;
		cin >> m;
		int ms;
		if (m == 1)
			ms = 31;
		else if (m == 2)
			ms = 28 + 31;
		else if (m == 3)
			ms = 31 + 28 + 31;
		else if (m == 4)
			ms = 31 + 28 + 31 + 30;
		else if (m == 5)
			ms = 31 + 28 + 31 + 30 + 31;
		else if (m == 6)
			ms = 31 + 28 + 31 + 30 + 31 + 30;
		else if (m == 7)
			ms = 31 + 28 + 31 + 30 + 31 + 30 + 31;
		else if (m == 8)
			ms = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
		else if (m == 9)
			ms = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
		else if (m == 10)
			ms = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
		else if (m == 11)
			ms = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		else if (m == 12)
			ms = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31;
		cout << "Number of days since the beginning of the year:" << ms << endl;
		cout << "Do you want to continue?(y/n)" << endl;
		cin >> s;
		if (s == 'y')
			goto Start;
		else
			goto Exit;

		break;
	}
	case 4:
	{
		int m1;
		int m0;
		int n;
	Tryagain:
		cout << "Enter a whole two-digit number N" << endl;
		cin >> n;
		if (n % 2 == 0)
		{
			m1 = n / 10;
			m0 = n % 10;
			cout << "Your first number is" << m1 << endl;
			cout << "Your second number is" << m0 << endl;
		}
		else
			goto Tryagain;

		cout << "Do you want to continue?(y/n)" << endl;
		cin >> s;
		if (s == 'y')
			goto Start;
		else
			goto Exit;

		break;
	}
	case 5:
	{
		int m1;
		int m2;
		int m3;
	Tryagain2:
		cout << "Please enter the number 1" << endl;
		cin >> m1;
		cout << "Please enter the number 2" << endl;
		cin >> m2;
		cout << "Please enter the number 3" << endl;
		cin >> m3;
		if (m1 < m2&&m1 < m3)
		{
			cout << "The smallest number is the number 1" << endl;
		}
		else if (m2 < m1&&m2 < m3)
		{
			cout << "The smallest number is the number 2" << endl;
		}
		else if (m3 < m1&&m3 < m2)
		{
			cout << "The smallest number is the number 3" << endl;
		}
		else
			goto Tryagain2;

		cout << "Do you want to continue?(y/n)" << endl;
		cin >> s;
		if (s == 'y')
			goto Start;
		else
			goto Exit;

		break;
	}
	case 6:
	{
		int m;
		int n;
		int m3;
	Tryagain3:
		cout << "Please enter the number M" << endl;
		cin >> m;
		cout << "Please enter the number N" << endl;
		cin >> n;
		if (m % 2 == 0 && n % 2 == 0)
		{
			if (n%m == 0)
				cout << "The second number is a multiple of the first" << endl;
			else
				cout << "The second number is not a multiple of the first" << endl;
		}
		else
			goto Tryagain3;

		cout << "Do you want to continue?(y/n)" << endl;
		cin >> s;
		if (s == 'y')
			goto Start;
		else
			goto Exit;

		break;
	}
Exit:
	break;
	}

}
