#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a * a + b * b - c * c == 0 || c * c + b * b- a * a == 0 || a * a + c * c - b * b == 0)
	{
		cout << "yes" << endl;
	}
	else if(a + b > c && b + c > a && a + c > b)
	{
		cout << "no" << endl;
	}
	else
	{
		cout << "no a triangle" << endl;
	}
	return 0;
}