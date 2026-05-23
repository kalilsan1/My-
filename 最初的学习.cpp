#include <iostream>
#include <ctime>
#include<algorithm>
#include<string>
#include <sstream>
using namespace std;
//#define Day 7

//int add(int num1,int num2)
//{
//	int sum = num1 + num2;
//	return sum;
//}


/* 双层 for 循环 */
string nestedForLoop(int n)
{

	ostringstream res;
	// 循环 i = 1, 2, ..., n-1, n
	for (int i = 1; i <= n; ++i) 
	{
		// 循环 j = 1, 2, ..., n-1, n
		for (int j = 1; j <= n; ++j) 
		{
			res << "(" << i << ", " << j << "), ";
		}
		
	}
	return res.str();
}

int main()
{
	/*float f1 = 3.14159f;
	cout << "f1=" << f1 << endl;
	double d1 = 3.14159;
	cout << "d1=" << d1 << endl;

	cout << "float占用的内存空间为:" << sizeof(f1) << endl;
	cout << "double占用的内存空间为:" << sizeof(d1) << endl;

	float f2 = 3e2;
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2;
	cout << "f3=" << f3 << endl;*/



	/*char ch = 'a';
	cout << ch << endl;
	cout << "占用的内存空间为:" << sizeof(ch) << endl;
	cout << (int)ch << endl;*/


	/*cout << "\\" << endl;

	cout << "aaaa\thello world" << endl;
	cout << "aa\thello world" << endl;
	cout << "aaaaaa\thello world" << endl;*/


	/*char str[] = "hello world";
	for (int i = 0; i >-1 ; i += 1)
	{
	

	
	cout << i ;
}*/


	/*bool flag = true;
	cout << flag << endl;
	cout << "内存" << sizeof(bool);*/

	//1 整形
	//int a = 0;
	//cout << "请给整型变量a赋值:" << endl;
	//cin >> a;
	//cout << "整型变量a=" << a << endl;
	////2 浮点型
	//float f = 0;
	//cout << "请给浮点型变量f赋值:" << endl;
	//cin >> f;
	//cout << "浮点型变量f=" << f << endl;
	//////3 字符型
	//char ch = 'a';
	//cout << "请给字符型变量ch赋值:" << endl;
	//cin >> f;
	//cout << "字符型变量ch=" << ch << endl;
	//////4 字符串型
	//string str = "hello";
	//cout << "请给字符串型变量str赋值:" << endl;
	//cin >> str;
	//cout << "字符串型变量str=" << str << endl;
	////布尔类型
	//bool flag = false;
	//cout << "请给布尔类型flag赋值:"  << endl;
	//cin >> flag;
	//cout << "布尔类型flag=" << flag << endl;


	/*int a = 10;
	int b = a-- * 10;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;*/

	/*int a = 10;
	int b = 20;
	cout <<(a == b )<< endl;
	cout << (a != b) << endl;
	cout << (a > b) << endl;
	cout << (a <b) << endl;*/


	//int a = 10;
	//cout << !a << endl;

	//cout << !!a << endl;



	/*int a = 10;
	int b = 10;
	cout <<( a && b) << endl;*/



	//int a = 0;
	//int b = 0;
	//cout << (a || b) << endl;


//int a = 0;
//cout << "请输入您的高考分数:" << endl;
//cin >> a;
//cout << "您输入的分数为:" << a << endl;
//if (a>=400)
//{
//
//	if (a > 680&&a<750)
//	{
//		cout << "恭喜您考入清华大学\n";
//	}
//
//
//	if (a >= 620&&a<680)
//	{
//		cout << "恭喜您考入985大学" << endl;
//	}
//
//	if (a >= 400 && a < 620)
//	{
//		cout << "恭喜你考入本科\n";
//
//	}
//	if (a > 750)
//	{
//		cout << "输入错误!请重新输入!\n";
//		return 0;
//	}
//}
//else{
//
//	cout << "恭喜你考入大专" << endl;
//
//}


//三只小猪称体重
//int num1 = 0;
//int num2 = 0;
//int num3 = 0;
//
////输入重量
//cout << "请输入小猪A的体重" << endl;
//cin >> num1;
//
//cout << "请输入小猪B的体重" << endl;
//cin >> num2;
//
//cout << "请输入小猪B的体重" << endl;
//cin >> num3;
//
//
//cout << "小猪A的体重为:" << num1 << endl;
//cout << "小猪B的体重为:" << num2 << endl;
//cout << "小猪C的体重为:" << num3 << endl;
//


//判断最重

//if (num1 > num2)
//{
//	if (num1 > num3)
//	{
//		cout << "小猪A最重\n";
//	}
//	else {
//		cout << "小猪C最重\n";
//	}
//}
//else
//{
//	if (num2 > num3)
//	{
//		cout << "小猪B最重\n";
//	}
//	else 
//	{
//		cout << "小猪C最重\n";
//	}
//}


//int a = 10;
//int b = 20;
//int c = 0;
//c = a > b ? a : b;
//cout << "c=" << c << endl;
//
//(a > b ? a : b) = 100;
//cout << "a=" << a << endl;
//cout << "b=" << b << endl; 


//switch语句
//给电影打分
//10~9  经典
//8~7   非常好
//6~5   一般
//5一下 烂片


//cout << "请给电影进行打分\n";
//int score = 0;
//cin >> score;
//cout << "您打的分数为:" << score << endl;
//switch (score)
//{
//	case 10:
//		cout << "您认为是经典电影" << endl;
//		break;
//	case 9:
//		cout << "您认为是经典电影" << endl;
//		break;
//    case 8:
//		cout << "您认为是非常好的电影" << endl;
//		break;
//	case 7:
//		cout << "您认为是非常好的电影" << endl;
//		break;
//	case 6:
//		cout << "您认为是一般的电影" << endl;
//		break;
//	case 5:
//		cout << "您认为是一般的电影" << endl;
//		break;
//	default:
//		cout << "您认为电影是烂片" << endl;
//		break;
//}



//int num = 0;
//
//while (num < 10)
//{
//	cout << num << endl;
//	num++;
//
//
//}


//srand((unsigned int)time(NULL));
//int num=rand() & 100 + 1;

//int val = 0;
//while (1)
//{
//	cout << "请输入您猜测的数字";
//	cin >> val;
//	cout << "您猜测的数字为:" << val << endl;;
//	if (val > num)
//	{
//		cout << "您猜测的数字大了哦,重新试试吧^v^\n";
//	}
//	else if (val < num)
//	{
//		cout << "您猜测的数字小了哦,重新试试吧^v^\n";
//	}
//	else
//	{
//		cout << "恭喜你猜对喽^v^\n";
//		break;
//	}
//	
//}


//int num = 0;
//
//do
//{
//	cout << num << endl;
//	num++;
//} while (num);


//while(num)
//{
//	cout << num << endl;
//	num++;
//}

//int num = 100;
//
//do
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100;
//
//
//	if (a*a*a+b*b*b+c*c*c==num)
//	{
//		cout << num << endl;
//	}
//	num++;
//} while (num < 1000);





	/*for (int i = 0;i<10;i++)
	{
		cout << i << endl;


	}*/




	/*for (int i = 1; i <= 100; i++)
	{
		
		if (i%7==0|| i%10 == 7|| i/10 == 7)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}*/



	/*for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";

		}
		cout << endl;
	}*/


	/*for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" << i << j * i << " ";
		}
		cout << endl;
	}*/



//break的使用时机

//1,出现在swich语句中
//cout << "请选择副本的难度" << endl;
//cout << "1,普通" << endl;
//cout << "2,中等" << endl;
//cout << "3,困难" << endl;
//
//int select = 0;
//
//cin >> select;
//
//switch (select)
//{
//case 1:
//	cout << "您选择的是普通难度" << endl;
//	break;
//case 2:
//	cout << "您选择的是中等难度" << endl;
//	break;
//case 3:
//	cout << "您选择的是困难难度" << endl;
//	break;
//default:
//	break;
//}



//2,出现在循环语句中
	/*for (int i = 0; i < 10; i++)
	{
		if (i==5)
		{
			break;
		}
		cout << i << endl;
	}*/



//3,出现在嵌套循环语句中

	/*for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{ 
			if (j == 5)
			{
				break;
			}
			cout << "* ";
		}

		cout << endl;
	}*/







	/*for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}*/





//goto语句


//cout << "1,xxxx" << endl;
//
//cout << "2,xxxx" << endl;
//goto FLAG;
//cout << "3,xxxx" << endl;
//
//cout << "4,xxxx" << endl;
//FLAG:
//cout << "5,xxxx" << endl;




//int arr[5];
//arr[0] = 10;
//arr[1] = 20;
//arr[2] = 30;
//arr[3] = 40;
//arr[4] = 50;

//cout << arr[0] << endl;
//cout << arr[1] << endl; 
//cout << arr[2] << endl;
//cout << arr[3] << endl;
//cout << arr[4] << endl;



//int arr2[5] = { 10,20,30,40,50 };
//cout << arr2[0] << endl;
//cout << arr2[1] << endl;
//cout << arr2[2] << endl;
//cout << arr2[3] << endl;
//cout << arr2[4] << endl;

//for (int i = 0; i < 5; i++)
//{
//	cout << arr2[i] << endl;
//}



//int arr3[] = { 90,80,70,60,50,40,30,20,10 };
//
//for (int i = 0; i < 9; i++)
//{
//	cout << arr3[i] << endl;
//}
//cout << "arr3占用的内存为" << sizeof(arr3)<< endl;
//cout << "每个元素占用的内存为" << sizeof(arr3[0]) << endl;
//cout << "元素的个数为" << sizeof(arr3)/ sizeof(arr3[0]) << endl;
//
//cout << "数组的首地址为:" << (int)arr << endl;
//cout << "数组的首地址为:" << arr[0] << endl;


//int arr[5] = { 200,350,500,400,250 };
//
//int max = 0;
//for (int i = 0; i < 5; i++)
//{
//	/*cout << arr[i] << endl;*/
//	if (arr[i] > max)
//	{
//		max = arr[i];
//	}
//}
//cout << max << endl;



//int arr[5] = { 1,3,2,5,4 };
//	cout << "数组逆置前的结果" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	int start = 0;
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//
//    int temp = arr[start];
//	arr[start] = arr[end];
//	arr[end] = temp;
//
//	start++;
//	end--;
//
//	while (start < end)
//	{
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//
//		start++;
//		end--;
//	}
//	cout << "数组元素逆置后的结果" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//
//




//int arr[9] = { 4,2,8,0,5,7,1,3,9 };
//cout << "排序前的结果:" << endl;
//for (int i = 0;i < 9; i++)
//{
//	cout << arr[i] << " ";
//}
//cout << endl;
//
//for (int i = 0; i < 9 - 1; i++)
//{
//	for (int j = 0; j < 9 - i - 1; j++)
//	{
//		if (arr[j] > arr[j + 1])
//		{
//			int temp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = temp;
//
//		}
//	}
//}
//cout << "排序后:" << endl;
//for (int i = 0; i < 9; i++)
//{
//	cout << arr[i] << " ";
//}
//cout << endl;




//int arr[2][3] =
//{
//	{1,2,3},{4,5,6}
//
//};
//for (int i = 0; i < 2; i++)
//{
//	for (int j = 0; j < 3; j++)
//	{
//		cout << arr[i][j] << " ";
//	}
//	cout << endl;
//}
//
//int arr3[2][3] = { 1,2,3,4,5,6 };
//for (int i = 0; i < 2; i++)
//{
//	for (int j = 0; j < 3; j++)
//	{
//		cout << arr[i][j] << " ";
//	}
//	cout << endl;
//}
//int arr4[][3] = { 1,2,3,4,5,6 };
//for (int i = 0; i < 2; i++)
//{
//	for (int j = 0; j < 3; j++)
//	{
//		cout << arr4[i][j] << " ";
//	}
//	cout << endl;
//}




//int arr[2][3] =
//{
//	{1,2,3},
//	{4,5,6}
//};
//cout << "二维数组所占用的内存空间为:" << sizeof(arr) << endl;
//cout << "二维数组第一行占用内存为:" << sizeof(arr[0]) << endl;
//cout << "二维数组第一个元素占用内存为:" << sizeof(arr[0][0]) << endl;
//
//cout << "二维数组行数为:" << sizeof(arr) / sizeof(arr[0]) << endl;
//cout << "二维数组列数为:" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//
//cout << "二维数组首地址为:" << (int)arr << endl;
//cout << "二维数组第一行首地址为:" << (int)arr[0] << endl;
//cout << "二维数组第二行首地址为:" << (int)arr[1] << endl;
//cout << "二维数组第一个元素首地址为:" << (int)&arr[0][0] << endl;




//int arr[3][3] =
//{
//	{100,100,100},
//	{90,50,70},
//	{60,70,80}
//};
//string names[3] = { "张三","李四","王五"};
//for (int i = 0; i < 3; i++)
//{
//	int sum = 0;
//	for (int j = 0; j < 3; j++)
//	{
//		sum += arr[i][j];
//		/*cout << arr[i][j] << " ";*/
//	}
//	cout <<names[i]<<" 的总分为:"<<sum<<endl;
//}




int  c = 10;
cout << nestedForLoop(c) << endl;



















    system("pause");
	return 0;
}