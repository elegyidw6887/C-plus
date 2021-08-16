/*
联编
*/

//#include<iostream>
//using namespace std;
//
//class CFundation
//{
//public:
//
//	virtual void Show()
//	{
//		cout << "FundationClass" << endl;
//	}
//};
//
//class CChild :public CFundation
//{
//public:
//
//	void Show()
//	{
//		cout << "ChildClass" << endl;
//	}
//};
//
//int main()
//{
//	/*
//	
//	联编：
//		是将模块或者函数合并在一起生成可执行代码的处理过程，按照联编的阶段不同，可以分为静态联编与动态联编
//
//	静态联编：
//		在编译阶段就将函数实现与函数调用关联在一起（C/C++均为静态联编，但是多态中存在动态联编）
//
//	动态联编：
//		在程序执行的时候将函数实现与函数调用关联在一起
//	
//	*/
//
//	CFundation* cfu1 = new CChild;
//	cfu1->Show();
//	//静态联编，在编译的时候就将函数实现与函数调用关联在一起
//
//	CFundation* cfu2;
//	int i;
//	cin >> i;
//	switch (i)
//	{
//	case 1: cfu2 = new CFundation;
//	case 2: cfu2 = new CChild;
//	}
//	cfu2->Show();
//	//动态联编，因为在编译的过程中并不能确定指针的具体指向，因此需要动态联编
//
//
//	system("pause");
//	return 0;
//}