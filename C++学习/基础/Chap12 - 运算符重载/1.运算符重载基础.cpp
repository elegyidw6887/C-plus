/*
运算符重载
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
//void operator+(CExample& ce1, CExample& ce2)
//{
//	cout << (ce1.Age + ce2.Age) << ' ' << (ce1.High + ce2.High) << endl;
//}
////在传递参数的时候，使用引用来避免调用拷贝构造的情况
//
//int main()
//{
//
//	CExample ce1,
//			 ce2;
//	//同时声明两个变量，第一个变量后方使用逗号
//	ce1 + ce2;
//	/*
//	error C2676: 二进制“+”:“CExample”不定义该运算符或到预定义运算符可接收的类型的转换
//	两个对象并不能相加，因此会报错，如果需要将对象进行相加，需要用到运算符重载
//	因此对象与其他类型的数据相加的时候也可以使用运算符重载
//	*/
//
//	/*
//	
//	运算符重载
//		void operator+(augment1, augment2)
//		{
//			
//		}
//		+号为要进行重载的运算符，也可以是其他的运算符
//		void为无返回值
//		本质为函数，多个运算符重载相当于函数重载
//
//	*/
//
//
//	system("pause");
//	return 0;
//}