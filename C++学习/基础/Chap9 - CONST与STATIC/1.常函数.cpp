/*
常函数
*/

//#include<iostream>
//using namespace std;
//
//class CPeople
//{
//public:
//
//	void ConstFun() const
//	{
//
//		cout << "Im a Const Function" << endl;
//	}
//};
//
//int main()
//{
//	/*
//	
//	常函数：
//		在函数定义的参数括号后添加const即可让函数成为常函数，并且只允许类中的函数定义为常函数
//		（构造函数与析构函数不允许定义为常函数）
//
//	常函数的特点：
//		1.常函数可以调用数据成员，但是不能对数据成员进行修改
//			对成员函数的功能有更明确的限定
//		2.this指针类型与普通函数不同（在使用过程中没有影响）
//			类型从CPeople*变为const CPeople*
//		3.常对象只能调用常函数，不能调用普通函数
//	
//	*/
//
//
//	system("pause");
//	return 0;
//}