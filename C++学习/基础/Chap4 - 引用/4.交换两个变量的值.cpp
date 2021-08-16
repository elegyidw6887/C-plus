/*
利用引用来交换两个变量的值
*/

//#include<iostream>
//using namespace std;
//
//void Exchange(int& a2, int& b2)
//{
//
//	int Temp = 0;
//	Temp = a2;
//	a2 = b2;
//	b2 = Temp;
//}
//
//int main()
//{
//	/*
//	
//	交换两个变量的值：
//		在C语言中可以使用指针，利用swap函数来实现
//			>int a,b;
//			>scanf("%d%d",&a,&b);
//			>swap(&a,&b);
//			>printf("%d %d",a,b);
//		在C++中，可以使用引用来交换两个变量的值
//	
//	*/
//	int a1 = 23,
//		b1 = 25;
//	cout << a1 << ' ' << b1 << ' ' << endl;
//	Exchange(a1, b1);
//	cout << a1 << ' ' << b1 << ' ' << endl;
//
//
//	system("pause");
//	return 0;
//}