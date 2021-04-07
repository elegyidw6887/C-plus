/*
函数模板的具体化
*/

//#include<iostream>
//using namespace std;
//
//struct Node
//{
//	int i;
//	double d;
//};
//
//template<typename T>
//void Fun(T a)
//{
//	cout << a << endl;
//}
//
//template<> void Fun<Node>(Node no)
//{
//	cout << no.i << '\n' << no.d << endl;
//}
////函数模板的具体化
//
////template void sawp<int>(int a);
////函数模板的实例化，但是在VS2019会报错，解决方法待定
//int main()
//{
//	/*
//	
//	函数模板的具体化
//		在面对一些复杂的数据类型的时候，比如结构体类型，简单的函数模板无法处理，此时需要对函数模板进行具体化
//		template<> void fun<type>(type arg){}
//
//		在具体化之后，代码执行会优先运行具体化的函数(相较于普通的函数模板而言)
//		(针对一些特殊的类型来单独实现)
//
//		如果存在普通的函数，代码则会优先执行普通的函数
//
//	函数模板的实例化
//		生成指定类型的函数定义
//	
//	*/
//
//	Node no1 = { 12,123.123 };
//	Fun(no1);
//	/*
//	error C2679: 二元“<<”: 没有找到接受“T”类型的右操作数的运算符(或没有可接受的转换)
//	*/
//
//	sawp(23);
//
//
//	system("pause");
//	return 0;
//}