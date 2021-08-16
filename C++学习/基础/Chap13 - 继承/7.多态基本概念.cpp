/*
多态基本概念（虚函数）
*/

//#include<iostream>
//using namespace std;
//
//class CFather
//{
//public:
//
//	virtual void Show()
//	{
//		cout << "FatherClass" << endl;
//	}
//};
//
//class CChild :public CFather
//{
//public:
//
//	void Show()
//	{
//		cout << "SonClass\n";
//	}
//};
//
//int main()
//{
//	/*
//	
//	多态：
//		父类的指针，调用子类的函数
//		如果父类中的函数为虚函数（virtual），而且子类中有同名的函数，此时再使用父类的指针就可以调用子类的同名函数
//		多个子类，根据指向的子类类型来实现多种状态的切换（多态）
//		多态只针对于堆区指针，栈区不行
//
//	*/
//
//	CFather* cfa1 = new CChild;
//	cfa1->Show();
//	//普通的指针只能调用父类中的函数
//
//
//	system("pause");
//	return 0;
//}