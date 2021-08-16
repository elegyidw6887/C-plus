/*
有参数的构造函数的继承
*/

//#include<iostream>
//using namespace std;
//
//class CFather
//{
//public:
//
//	CFather(int a)
//	{
//		cout << "the FatherClass" << endl;
//	}
//	
//	void Study()
//	{
//		cout << "Study" << endl;
//	}
//
//};
//	
//class CChild:public CFather
//{
//public:
//
//	CChild(int b):CFather(25)//父类参数的传递
//	{
//		cout << "the SonClass" << endl;
//	}
//	
//	void GoToSchool()
//	{
//		cout << "Go to school" << endl;
//	}
//
//};
//
//int main()
//{
//	/*
//	
//	有参数的构造函数的继承
//	
//	*/
//
//	CChild xm(23);
//	/*	1
//	* 在不添加任何参数的情况下调试
//	error C2512: “CFather”: 没有合适的默认构造函数可用
//	message : 参见“CFather”的声明
//	error C2512: “CChild”: 没有合适的默认构造函数可用
//	message : 参见“CChild”的声明
//	* 2
//	在对象申请的时候添加的参数为子类的参数，这样父类依旧没有参数可以传递，因此需要在子类的构造函数后方添加初始化列表来给父类进行参数传递
//	*/
//
//
//	system("pause");
//	return 0;
//}