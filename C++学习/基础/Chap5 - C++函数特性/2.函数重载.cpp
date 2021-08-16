/*
函数重载
*/

//#include<iostream>
//using namespace std;
//
//void Fun(int a)
//{
//
//	cout << "Im a Funtion with a int parameter" << endl;
//	cout << a << endl;
//}
//
//void Fun(int b,double d)
//{
//
//	cout << "Im a Funtion with double parameter that is int and double" << endl;
//	cout << b << ' ' << d << endl;
//}
//
//void Fun(char c)
//{
//
//	cout << "Im a Funtion with a char parameter" << endl;
//	cout << c << endl;
//}
//
//int main()
//{
//	/*
//	
//	函数重载：
//		定义：
//			同意作用域内，函数名字相同，参数列表不同（参数类型不同或者参数个数不同）
//		形式：
//			>void Fun(int a)
//			>void Fun(int b,double d)
//			>void Fun(char c)
//		函数调用：
//			在调用的时候，系统会根据传递的参数的类型与个数来与重载的函数自动进行匹配
//		函数重载的功能：
//			可以在一定程度上自动识别传递的参数并进行各种操作
//	
//	*/
//	Fun(23);
//	Fun(25, 123.123);
//	Fun('H');
//
//
//	system("pause");
//	return 0;
//}