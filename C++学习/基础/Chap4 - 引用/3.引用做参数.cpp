/*
引用做函数参数
*/

//#include<iostream>
//using namespace std;
//void Fun(int&);
//
//void Fun(int& a)
//{
//	a = 25;
//	cout << a << '\n';
//}
//
//int main()
//{
//	/*
//	
//	引用做函数参数：
//		在函数声明与本体的参数位置书写引用
//			>void Fun(int&);
//			>void Fun(int& a)
//		引用做参数的特点：
//			1.二者公用一块空间
//			2.引用做参数，在函数内进行数值的修改时，也会对原始数据进行修改（在C语言中如果要做到类似的效果，采用的方法是传递指针参数）
//	
//	*/
//	int b = 23;
//	Fun(b);
//	cout << b << '\n';
//
//
//	system("pause");
//	return 0;
//}