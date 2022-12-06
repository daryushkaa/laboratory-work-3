// laba5 oi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

void CheckINPUT()
{
	if (cin.fail()) throw "Incorrect input!!!";
}
void CheckN(int n)
{
	if (n < 3) throw "n should be greater than 3!";
}
void CheckSTEP(double step)
{
	if (step <= 0) throw "Step should be more than 0!";
}
void CheckAB(double a, double b)
{
	if (a >= b) throw "a should be less than b!";
}

double CALCULATION(double x, int n)
{
	double y = 0;
	double sum = 0;
	
	if (x <= 0)
	{
		y = 0;
		for (int i = 2; i <= n - 1; i++)
		{
			y += (x / i);
		}
	}
	else
	{
		for (int i = 1; i <= (n - 1); i++)
		{
			for (int j = 0; j <= i; j++)
			{
				sum += (i / (j + x));
			}
			y = sum;
		}
	}
	return y;
}

int main()
{
	double a, b;
	int n;
	double y = 0;
	double sum = 0;
	double step;
	try
	{
		cout << "Input n: ";
		cin >> n;
		CheckINPUT();
		CheckN(n);
		cout << "Input a: ";
		cin >> a;
		CheckINPUT();
		cout << "Input b: ";
		cin >> b;
		CheckINPUT();
		CheckAB(a, b);
		cout << "Input step: ";
		cin >> step;
		CheckINPUT();
		CheckSTEP(step);
		for (double x = a; x<=b; x+=step)
		{
			cout << "x is " << x << "  y is " << CALCULATION(x, n) << endl;
		}
	}
	catch (const char* typo)
	{
		cout << typo;
		return -1;
	}
	catch(...)
	{
		cout << "Unknown error!";
		return -2;
	}
}