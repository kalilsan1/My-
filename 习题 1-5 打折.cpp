#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
	const double c = 95;
	double a;
	cin >> a;
	if (a * c >= 300.0)
	{
		printf("%.2f", a * c * 0.85);
	}
	else
		cout << a * c;
}