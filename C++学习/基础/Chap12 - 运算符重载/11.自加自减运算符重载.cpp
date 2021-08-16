/*
自加自减运算符重载
 */

//#include<iostream>
//using namespace std;
//
//class CExample
//{
//public:
//
//	int cA;
//
//	CExample()
//	{
//		cA = 23;
//	}
//
//};
//
//int operator++(CExample& ce)
//{
//	ce.cA += 1;
//	return ce.cA;
//}
///*
//前置运算符：左++的类外重载
//*/
//int operator--(CExample& ce)
//{
//	ce.cA -= 1;
//	return ce.cA;
//}
///*
//前置运算符：左--的类外重载
//*/
//
//int operator++(CExample& ce, int a)
//{
//	/*ce.cA += 1;
//	return (ce.cA - 1);*/
//	a = ce.cA;
//	ce.cA += 1;
//	return a;
//}
///*
//后置运算符：右++的重载，其中的int参数为标记，与前置运算符重载区别开来
//*/
//int operator--(CExample& ce, int a)
//{
//	/*ce.cA -= 1;
//	return (ce.cA + 1);*/
//	a = ce.cA;
//	ce.cA -= 1;
//	return a;
//}
//
//int main()
//{
//	/*
//	
//	自加自减运算符重载
//		前置运算符：左++、左--
//		后置运算符：右++、右--
//	
//	*/
//
//	CExample ce1;
//	cout << ++ce1 << endl;
//	cout << --ce1 << endl;
//	cout << ce1.cA << endl;
//
//	cout << endl;
//
//	CExample ce2;
//	cout << ce2++ << endl;
//	cout << ce2-- << endl;
//	cout << ce2.cA << endl;
//
//
//	system("pause");
//	return 0;
//}