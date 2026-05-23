#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

//常用排序算法 reverse

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	cout << "反转前: " << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	cout << "反转后: " << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main()
{
	test01();



	system("pause");
	return 0;
}