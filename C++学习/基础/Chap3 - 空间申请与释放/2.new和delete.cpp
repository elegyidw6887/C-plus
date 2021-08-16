/*
空间申请：new与delete
*/

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	/*
//	
//	堆区空间的申请与释放：
//		malloc与new，free与delete，C与C++
//			>int* p = (int*)malloc(sizeof(int)); > free(p);
//			>int* p = new int; > delete p;
//		二者的对比：
//			C语言中，使用malloc申请空间时在前方使用强转运算符来将空间转换为int类型，之后后方添加你要申请的空间的大小
//			C++中，使用new申请空间时直接在后方添加内存的类型，形式更简便
//	
//	*/
//	int* p1 = new int;
//	*p1 = 23;
//	cout << *p1 << '\n';
//
//	int* p2 = new int(25);
//	//在申请的同时可以使用此种形式来进行初始化
//	cout << *p2 << '\n';
//
//	int* p3 = new int[5];
//	//申请一个连续空间，返回值为空间首地址，同时没有同时进行初始化的方法，但是可以使用memset进行赋值
//	memset(p3, 0, 20);
//	//共有三个参数，第一个参数为首地址，第二个参数为初始化的值，第三个参数为空间的大小
//	cout << p3[0] << p3[1] << p3[2] << p3[3] << p3[4] << '\n';
//
//	delete p1;
//	delete p2;
//	delete[] p3;
//	//在释放数组空间时，在delete后方需要添加一个方括号
//
//	system("pause");
//	return 0;
//}