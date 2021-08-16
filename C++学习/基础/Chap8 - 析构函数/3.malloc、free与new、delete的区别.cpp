/*
C语言中malloc、free与C++中new、delete的区别
*/

//#include<iostream>
//using namespace std;
//
//class CPeople
//{
//public:
//
//	int Age;
//
//	CPeople()
//	{
//
//		cout << "触发构造函数~" << endl;
//	}
//
//	CPeople(int a)
//	{
//
//		cout << "触发构造函数~" << endl;
//	}
//
//	~CPeople()
//	{
//
//		cout << "触发析构函数，类调用完毕~" << endl;
//	}
//
//};
//
//int main()
//{
//	/*
//	
//	malloc与new的区别：
//		malloc无法触发构造函数，但是new可以
//
//	free与delete的区别：
//		free无法触发析构函数，但是delete可以
//	
//	*/
//	CPeople* cp1 = (CPeople*)malloc(sizeof(CPeople));
//	//经过运行可以发现，并没有触发构造函数
//	free(cp1);
//	//经过运行可以发现，并没有触发析构函数
//
//
//	system("pause");
//	return 0;
//}