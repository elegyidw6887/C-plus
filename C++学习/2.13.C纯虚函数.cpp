/*
纯虚函数
*/

//#include<iostream>
//using namespace std;
//
//class CFather
//{
//public:
//
//	virtual void Show() = 0;
//	//纯虚函数的定义
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
//};
//
//int main()
//{
//	/*
//	
//	纯虚函数
//		特点：
//			1.可以没有函数实现
//			2.继承这个父类的子类必须实现它，才能定义对象
//			3.有纯虚函数的类不能创建对象（VS2019可以创建对象，该条目待定）
//		抽象类：
//			类内存在纯虚函数的类，被称为抽象类
//		接口类：
//			全为纯虚函数的类，被称为接口类（有成员与构造函数无所谓，因为二者不能定义为虚函数）
//	
//	*/
//
//	CFather* cfa1 = new CChild;
//	cfa1->Show();
//	delete cfa1;
//
//
//	system("pause");
//	return 0;
//}