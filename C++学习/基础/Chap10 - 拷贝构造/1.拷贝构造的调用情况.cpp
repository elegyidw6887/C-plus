/*
拷贝构造的调用情况
*/

//#include<iostream>
//using namespace std;
//
//class CPeople
//{
//public:
//
//	CPeople()
//	{
//
//	}
//	//普通构造函数
//
//	CPeople(const CPeople& a)
//	{
//
//	}
//	//拷贝构造
//
//};
//
//void Fun(CPeople a)
//{
//	cout << "此时也会触发拷贝构造" << endl;
//}
//
//CPeople Fun2()
//{
//	CPeople a;
//	return a;
//}
//
//int main()
//{
//	/*/
//	
//	拷贝构造：
//		是一种特殊的构造函数（也被称为复制构造）
//
//	会调用拷贝构造的情况：
//		1.新建一个对象，并将其初始化为同类现有对象
//			首先声明一个对象：CPeople cp1;
//			>CPeople cp2(cp1);
//			>CPeople cp2 = cp1;
//			>CPeople cp3 = CPeople(cp1);//临时对象
//			>CPeople* cp7 = new CPeople(cp1);
//		2.当程序生成对象副本时
//			函数参数传递对象的值
//			函数返回对象的值
//	
//	*/
//	CPeople cp1;
//	CPeople cp2(cp1);
//	//与CPeople cp2 = cp1效果相同，只有初始化才会调用拷贝构造，赋值不会触发调用
//	CPeople cp3 = CPeople(cp1);
//	//使用临时对象的情况下，部分编译器会进行优化，因此并不一定会真正的产生一个临时对象
//	CPeople* cp4 = new CPeople(cp1);
//	
//	Fun(cp1);
//	//参数传递对象的值
//
//	Fun2();
//	//函数返回对象
//
//	system("pause");
//	return 0;
//}