#include<iostream>
#include<stack>
using namespace std;

int test1(int n)
{
	stack<int>s1;
	int sum = 0;  
	for(int i=n;i>0;i--)
	{
		s1.push(i);
	}

	while(!s1.empty())
	{
		//cout<<"Õ»¶¥ÔªËØÎª£º"<<s1.top()<<endl;
		sum = sum + s1.top(); 
		s1.pop();
	}
	
	cout << "1+2+3+...+" << n << " = " << sum << endl;
	return sum;
}

int main()
{
	int n=0;
	cin>>n;
	test1(n);
	return 0;
}
