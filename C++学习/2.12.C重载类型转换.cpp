/*
重载类型转换
*/

//#include<iostream>
//using namespace std;
//
//class CExample
//{
//public:
//
//	int cN;
//	double cD;
//
//	CExample()
//	{
//		cN = 23;
//		cD = 173.5;
//	}
//
//	operator int() const
//	{
//		return cN;
//	}
//	/*
//	没有返回类型，但是可以使用return返回
//	*/
//	operator double() const
//	{
//		return cD;
//	}
//
//};
//
//
//
//int main()
//{
//	/*
//	
//	重载类型转换
//		C++中对类对象进行强制类型转换
//		强制类型转换的重载必须放在类内，与相对应的对象进行匹配
//		而且可以定义为const类型，防止对数据的修改
//	
//	*/
//
//	CExample ce1;
//	(int)ce1;
//	cout << (int)ce1 << endl;
//	cout << (double)ce1 << endl;
//
//
//	system("pause");
//	return 0;
//}
