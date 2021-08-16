/*
初始化与赋值的区别
*/

//#include<iostream>
//using namespace std;
//
//struct StuInfo
//{
//	int a;
//};
//
//int main()
//{
//	/*
//	
//	初始化与赋值的区别：
//		初始化：
//			是一个变量或者对象在产生之时就被赋予的一个初始值，属于伴随性质
//		赋值：
//			是一个变量或者对象在产生之后的任意时刻被赋予的值，属于随意性质
//	
//	*/
//	
//	int a;
//	a = 23;
//	int b = 25;
//	cout << a << ' ' << b << endl;
//	//常规的数据类型，初始化与赋值没有区别
//
//	int c[3] = { 1,2,3 };
//	int d[3];
//	d[0] = 1;
//	cout << c[0] << ' ' << d[0] << endl;
//	//对数组而言，初始化与赋值的形式不同
//
//	StuInfo stu1 = { 23 };
//	StuInfo stu2;
//	stu2.a = 25;
//	cout << stu1.a << ' ' << stu2.a << endl;
//	//结构体变量的初始化与赋值的不同
//
//	int& e = a;
//	cout << e << endl;
//	//对于引用，只能进行初始化，不可以进行赋值
//
//	const int ci1 = 23;
//	cout << ci1 << endl;
//	//对于const类型的变量，只能进行初始化，不可以进行赋值
//
//	system("pause");
//	return 0;
//}