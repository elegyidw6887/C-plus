/*
static_cast
*/

//#include<iostream>
//using namespace std;
//
//class CFather
//{
//public:
//
//	int aF;
//};
//
//class CChild :public CFather
//{
//public:
//		
//	int aC;
//
//};
//
//int main()
//{
//	/*
//	
//	数据类型转换：
//
//		旧式数据类型转换：
//			(type)value
//			type(value)
//		新式数据类型转换：
//			static_cast
//				当二者之间可以进行隐式类型转换时，可以进行类型转换
//				expression1 = static_cast<type>(expression2);
//			const_cast
//			dynamic_cast
//			reinterpret_cast
//	
//	*/
//
//	CFather* cf1;
//	CChild* cc1;
//
//	/*cf1 = (CFather*)cc1;*/
//
//	cf1 = static_cast<CFather*>(cc1);
//
//
//	system("pause");
//	return 0;
//}