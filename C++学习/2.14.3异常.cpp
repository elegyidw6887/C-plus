/*
异常
*/

//#include<iostream>
//#include<cstdlib>
//using namespace std;
//
//void Fun(int a)
//{
//	/*cout << endl;
//	if (0 == a)
//	{
//		cout << "Oops!" << endl;
//		abort();
//	}
//	else
//	{
//		cout << "Great! No error" << endl;
//	}*/
//
//	if (0 == a)
//	{
//		throw a;
//	}
//	else
//	{
//		cout << "Great! No error" << endl;
//	}
//}
//
//int main()
//{
//	/*
//	
//	异常：
//		是一种人为定义的状况
//
//	异常终止函数：
//		abort();
//
//	try throw catch:
//		异常处理
//		1.try中调用函数
//		2.函数中检测到异常参数
//		3.throw抛出数值
//		4.catch接住数值并进行相应的代码运行
//		5.多个catch直接存在重载关系，可以应对不同的错误情况
//		6.如果遇到了类中的成员，参数需要使用地址或者引用，以防止拷贝构造的调用
//	
//	*/
//
//	/*abort();*/
//	/*
//	在直接调用此函数的时候会显示：
//	debug error!
//	*/
//	int i;
//	cin >> i;
//	/*Fun(i);*/
//
//	try
//	{
//		Fun(i);
//	}
//	catch(int Ncatch)
//	{
//		cout << Ncatch << endl;
//	}
//	catch (...)
//	{
//		cout << "Default" << endl;
//	}
//	/*
//	在没有对应的类型进行catch的时候，使用此种(默认)方式来处理
//	*/
//
//
//	system("pause");
//	return 0;
//}