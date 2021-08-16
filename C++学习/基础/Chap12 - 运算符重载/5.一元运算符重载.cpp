/*
一元运算符重载
*/

//#include<iostream>
//using namespace std;
//
//class CExample
//{
//public:
//
//	int cAge;
//
//	CExample(int age)
//	{
//		cAge = age;
//	}
//
//};
//
//int operator-(CExample& ce1)
//{
//	return (-ce1.cAge);
//}
//
//int main()
//{
//	/*
//	
//	一元运算符重载
//		与二元运算符重载相类似，只是形式上有所不同
//	
//	*/
//	CExample ce1(23);
//	cout << -ce1 << endl;
//	/*
//	error C2675: 一元“-”:“CExample”不定义该运算符或到预定义运算符可接收类型的转换
//	error C2088: “-”: 对于 class 非法
//	*/
//	CExample ce2(25);
//	cout << -ce2 << endl;
//
//
//	system("pause");
//	return 0;
//}