/*
命名空间：namespace
*/

//#include<iostream>
//using namespace std;
////命名空间
//void Fun(void);
//
//namespace sec
//{
//	void Fun(void)
//	{
//		cout << "Im a Function too!" << '\n';
//	}
//	//在其他命名空间中可以存在相同的函数
//}
//using namespace sec;
//
//void Fun(void)
//{
//	cout << "Im a Function" << '\n';
//}
//
//int main()
//{
//	/*
//	
//	重定义问题：
//		在C语言中，如果一个函数连续声明两个，会报错并提示，在C++中也是如此，但是在C++中提供了一个全新的方式来解决这个问题，那就是命名空间
//
//	命名空间：
//		功能：区分同名变量或者函数
//		创建：
//			namespace (name)
//			空间的名字可以自定义，并且不需要括号
//		使用：
//			如果要使用手动命名的空间，需要在命名空间后添加
//				>using namespace (name);
//			在对新空间内函数进行调用时，需要用到作用域运算符::
//	
//	*/
//	/*Fun();*/
//	sec::Fun();
//
//
//	system("pause");
//	return 0;
//}