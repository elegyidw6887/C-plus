/*
引用与const的初始化
*/

//#include<iostream>
//using namespace std;
//
//class CPeople
//{
//public:
//
//	int a;
//	int& b;
//	const int e;
//	CPeople(int c) :a(c), b(a), e(1314)
//	{
//		//引用的初始化
//		//
//	}
//	void show()
//	{
//		cout << a << ' ' << b << ' ' << e << endl;
//
//	}
//};
//
//int main()
//{
//	/*
//	
//	引用的初始化：
//		当我们在类中声明一个引用并且不初始化的时候，我们要用到初始化列表再进行初始化
//
//	const的初始化：
//		可以使用参数进行初始化，也可以直接使用数值进行初始化
//
//	多个构造函数以及初始化列表：
//		初始化列表与构造函数是一一对应的关系，当多个构造函数重载的时候，会根据提供的参数来匹配队形的构造函数并执行对应的初始化列表
//	
//	*/
//	CPeople cp1 = 25;
//	cp1.show();
//
//
//	system("pause");
//	return 0;
//}