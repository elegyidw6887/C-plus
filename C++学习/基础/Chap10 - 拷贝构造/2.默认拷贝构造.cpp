/*
默认拷贝构造
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//class CExample
//{
//public:
//
//	int i;
//	char c[4];
//
//	CExample()
//	{
//
//		i = 25;
//		strcpy(c, "Yep");
//		//字符串拷贝函数，第一个参数为字符串数组地址，第二个参数为源字符串
//	}
//
//	CExample(const CExample& a)
//	{
//
//		this->i = a.i;
//		strcpy(this->c, a.c);
//		//手动完成与默认拷贝构造相同的效果
//	}
//
//};
//
//int main()
//{
//	/*
//	
//	默认拷贝函数：
//		系统默认的拷贝构造，会诸逐个赋值非静态成员（成员的赋值为浅复制），复制的是成员的值
//		系统默认的拷贝构造又被称为【浅拷贝】
//	
//	*/
//	//声明一个对象
//	CExample ce1;
//	cout << ce1.i << ' ' << ce1.c << endl;
//	//声明一个新的对象并用存在的对象进行赋值
//	CExample ce2 = ce1;
//	cout << ce2.i << ' ' << ce2.c << endl;
//
//
//	system("pause");
//	return 0;
//}