/*
析构函数delete和临时对象
*/

//#include<iostream>
//using namespace std;
//
//class CPeople
//{
//public:
//
//	int Age;
//	int* p1;
//
//	CPeople()
//	{
//
//	}
//
//	CPeople(int a) : Age(a)
//	{
//
//		p1 = new int(20);
//		cout << Age << endl;
//		cout << &p1 << endl;
//	}
//
//	~CPeople()
//	{
//		cout << "类引用完毕！" << endl;
//		delete p1;
//	}
//};
//
//int main()
//{
//	/*
//	
//	析构函数与delete：
//		使用new来申请的堆区空间，其代码有效区一直到delete语句来释放这块空间，因此如果想在这种情况下调用析构函数，必须使用delete
//
//	临时对象：
//		在声明变量（对象）的时候，不设置名称，直接使用小括号来包含想要声明的值，这种形式创造的对象即为临时对象
//
//	构造函数与析构函数对堆区空间的应用：
//		在调用的时候，在构造函数中申请堆区空间，之后在调用结束后，在析构函数中将堆区空间释放
//	
//	*/
//	CPeople* cp1 = new CPeople(25);
//	//使用new申请的堆区指针cp1如果不主动使用delete释放，则不会调用析构函数，因此可以用delete来触发析构函数的调用
//	delete cp1;
//
//	CPeople(23);
//	//临时对象的创建，括号内的为参数，需要与构建函数的参数相对应，作用域仅为当前的语句
//
//
//	system("pause");
//	return 0;
//}