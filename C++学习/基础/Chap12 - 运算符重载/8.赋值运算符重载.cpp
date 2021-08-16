/*
赋值运算符重载
*/

//#include<iostream>
//using namespace std;
//
//class CExample
//{
//private:
//
//	int cAge;
//
//public:
//
//	CExample()
//	{
//		cAge = 23;
//	}
//
//	int operator=(int a)
//	{
//		return (this->cAge = a);
//	}
//
//	int operator+=(int a)
//	{
//		return (this->cAge = this->cAge + a);
//	}
//
//	/*friend CExample& operator+=(CExample& ce, int a);*/
//
//};
//
////void operator=(CExample& ce, int a)
////{
////	/*	2
////	error C2801: “operator =”必须是非静态成员
////	如果在类外使用会出现如此问题，因此必须在类内进行使用
////	*/
////}
//
////CExample& operator+=(CExample& ce, int a)
////{
////	ce.cAge = a;
////	return ce;
////	/*	3
////	如果要使用这种形式，会出现报错
////	error C2679: 二元“<<”: 没有找到接受“CExample”类型的右操作数的运算符(或没有可接受的转换)
////	需要对<<进行重载
////	*/
////}
//
//int main()
//{
//	/*
//	
//	赋值运算符重载
//		简单赋值运算符：=
//		复合赋值运算符：+=、-=、*=、/=......
//		（建议书写在类内）
//
//	*/
//	CExample ce1;
//	cout << (ce1 = 25) << endl;
//	/* 1
//	error C2679: 二元“=”: 没有找到接受“int”类型的右操作数的运算符(或没有可接受的转换)
//	*/
//	cout << (ce1 += 23) << endl;
//
//
//	system("pause");
//	return 0;
//}