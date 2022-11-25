// laba 2 oi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
	double a, b, n;
	double y = 0;
	double sum = 0;
	double sum1 = 0;
	double step;
	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	if (a>b)
	{
		cout << "Error!";
		return 0;
	}
	cout << "Input step: ";
	cin >> step;
	if (step <=0)
	{
		cout << " Error! Step should be more than 0";
		return 0;
	}
	cout << "input n (n>3): ";
	cin >> n; 
	do
	{
		cout << "Error!" << endl;
		cout << "input n (n>3):";
		cin >> n;
	} while (n < 3);
	  
	for (double x = a; x<=b; x += step)
	{
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
		cout << "x is "<< x << " y is " << y << endl;
	}
	return 0;
}
