/*
静态成员的使用方法
*/

//#include<iostream>
//using namespace std;
//
//class CPeople
//{
//public:
//
//	static int a;
//	static const int b = 25;
//	//静态常量整形成员可以在类内直接进行初始化
//	CPeople()
//	{
//		a = 23;
//		//虽然不可以初始化，但是可以赋值
//	}
//	//构造函数
//
//	static void Fun()
//	{
//
//		cout << "Im a Function!" << endl;
//		cout << b << endl;
//		//静态函数调用静态成员
//	}
//
//};
//
//int CPeople::a = 23;
////静态成员类外初始化
//
//int main()
//{
//	/*
//	
//	静态成员：
//		static前缀
//		在类内声明一个静态成员之后，无法使用构造函数来进行初始化，必须在类外进行初始化（但是类内是可以进行赋值的）
//		类外初始化使用作用域运算符
//
//		注意点：
//			1.静态成员无this指针
//			2.静态成员不能调用成员函数，但是可以调用静态成员
//
//	*/
//	cout << CPeople::a << endl;
//	//直接使用作用域运算符来调用
//	CPeople cp1;
//	cout << cp1.a << endl;
//	//使用对象来进行调用
//	cp1.Fun();
//	//使用对象来调用静态函数
//
//
//	system("pause");
//	return 0;
//}