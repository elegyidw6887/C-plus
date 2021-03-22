/*
运算符重载基础的返回值作用
*/

//#include<iostream>
//using namespace std;
//
//class CExample
//{
//public:
//
//	int Age;
//	double High;
//
//	CExample()
//	{
//		Age = 23;
//		High = 173.0;
//	}
//
//};
//
//int operator+(CExample& ce, int a)
//{
//	return (ce.Age + a);
//}
//运算符重载的参数只需要格式相对应即可
//
//int operator+(int a, CExample& ce)
//{
//	return (a + ce.Age);
//}
//
//int main()
//{
//	/*
//	
//	运算符重载基础的返回值作用
//		在涉及到类的连续运算时，运用具有返回值的运算符重载来实现连续相加
//	
//	*/
//	CExample ce1,
//			 ce2;
//	int i = 25;
//	cout << ce1 + i << endl;
//	cout << (ce1 + i + ce2) << endl;
//
//
//	system("pause");
//	return 0;
//}