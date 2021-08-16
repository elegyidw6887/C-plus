/*
虚析构
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
//
//	virtual ~CFather()
//	{
//		cout << "FatherClass OUT" << endl;
//	}
//};
//
//class CChild :public CFather
//{
//public:
//
//	void Show()
//	{
//		cout << "SonClass" << endl;
//	}
//
//	virtual ~CChild()
//	{
//		cout << "SonClass OUT" << endl;
//	}
//};
//
//class Cxiaoming
//{
//public:
//
//	~Cxiaoming()
//	{
//		cout << "Im xiaoming" << endl;
//	}
//};
//
//int main()
//{
//	/*
//	
//	虚析构：
//		构造函数由于其本身的特性，不能声明为虚函数，但是析构函数可以
//		
//		在将析构函数声明为虚函数的时候，这个使用再使用父类指针调用子类函数的时候，就能够同时调用二者的析构函数
//		(而且优先调用子类的析构函数)
//	
//	*/
//
//	CFather* cfa1 = new CChild;
//
//	/*delete cfa1;*/
//	//经过测试表明，在这种情况下，只会调用父类的析构函数
//	delete (Cxiaoming*)cfa1;
//	/*
//	如果给delete添加了指针的类型，则会在运行调用析构函数的时候调用对应类型的类的析构函数
//	但是不管调用了谁的析构函数，原本的空间都会被释放掉
//	*/
//
//
//	system("pause");
//	return 0;
//}