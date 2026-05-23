#include <iostream>
using namespace std;  

int main()
{
	//指针所占内存空间大小
	int a = 10;
	int * p = &a;
	//32位系统占4,不管什么数据
	//64位系统占8,不管什么数据

	cout << "sizeof (int *)= " << sizeof(int *) << endl;
	cout << "sizeof (int *)= " << sizeof(float *) << endl;
	cout << "sizeof (int *)= " << sizeof(double *) << endl;
	cout << "sizeof (int *)= " << sizeof(char *) << endl;



	system("pause");
	return 0;
}