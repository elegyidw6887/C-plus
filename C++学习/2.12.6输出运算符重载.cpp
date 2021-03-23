/*
输出运算符重载
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
//	CExample(int age)
//	{
//		cAge = age;
//	}
//
//	friend ostream& operator<<(ostream& os, const CExample& ce);
//
//};
//
////void operator<<(ostream& os, const CExample& ce)
////{
////	os << ce.cAge << endl;
////}
//
//ostream& operator<<(ostream& os, const CExample& ce)
//{
//	os << ce.cAge;
//	return os;
//}
//
//int main()
//{
//	/*
//	
//	输出运算符重载
//		用于类的输出，无返回值的无法进行连续输出，有返回值的可以进行连续输出
//		对于类内的私有成员，可以使用友元来进行重载
//	
//	*/
//
//	CExample ce1(23);
//	cout << ce1;
//
//	system("pause");
//	return 0;
//}