/*
下标运算符重载
*/

//#include<iostream>
//using namespace std;
//
//class CExample
//{
//private:
//
//	int cA;
//	int cB;
//	int cC;
//	int cD;
//	int cError = -1;
//
//public:
//
//	CExample()
//	{
//		cA = 12;
//		cB = 34;
//		cC = 56;
//		cD = 78;
//	}
//
//	int& operator[](int n)
//		/*	3
//		如果要对数据进行修改
//		类型要从：int
//		改为：int&
//		传递引用
//		*/
//	{
//		switch (n)
//		{
//		case 0:
//			return this->cA;
//		case 1:
//			return this->cB;
//		case 2:
//			return this->cC;
//		case 3:
//			return this->cD;
//		}
//		return this->cError;
//	}
//	/*	4
//	如果要让下标运算符重载更加灵活，可以返回一个指针，这样就可以返回多种不同类型的变量
//	*/
//
//};
//
////int operator[](CExample& ce, int n)
////{
////	switch (n)
////	{
////	case 0:
////		return this->cA;
////	}
////	{
////	case 1:
////		return this->cB;
////	}
////	/*	2
////	error C2801: “operator []”必须是非静态成员
////	根据报错可以得知下标运算符重载必须为类内成员
////	*/
////
////}
//
//int main()
//{
//	/*
//	
//	下标运算符重载
//		下标运算符：[]
//	
//	*/
//	CExample ce1;
//	cout << "!如果结果为-1，则为错误!" << endl;
//	cout << endl;
//	cout << ce1[1] << endl;
//	/*	1
//	error C2676: 二进制“[”:“CExample”不定义该运算符或到预定义运算符可接收的类型的转换
//	*/
//	cout << ce1[5] << endl;
//
//
//	system("pause");
//	return 0;
//}