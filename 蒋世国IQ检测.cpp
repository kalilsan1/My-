#include<iostream>
using namespace std;

void showMenu()
{
	cout << "******************************************"<<endl;
	cout << "*****  1.啦啦啦啦啦 好想玩鸣潮   *********"<<endl;
	cout << "*****  2.欢迎来到蒋世国智商检测小程序*****"<<endl;
	cout << "*****  3.温馨提示 输入114514退出 嘻嘻*****"<<endl;
	cout << "*****  4.请输入蒋世国的IQ!         *******"<<endl;
	cout << "******************************************"<<endl;
}

int main()
{

	while(true)
	{
		showMenu();
    long long int iq=0;
	cin>>iq;
	if(iq>=120&&iq!=114514)
	{
	cout<<"吹牛逼 蒋世国智商能有这么高？"<<endl; 
	}
	
	else if(iq>=0&&iq<120)
	{
		cout<<"咚咚咚！ 经检测 蒋世国是个低智儿"<<endl;
	}
	else if(iq==114514)
	{
	break;
    }
	else
	{
		cout<<"你是傻福吗 智商负数都来了"<<endl; 
	}
	system("pause"); 
	system("cls");
    }
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}





























