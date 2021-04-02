/*
析构函数与继承
*/

//#include<iostream>
//using namespace std;
//
//class CFather
//{
//public:
//
//	CFather(int a)
//	{
//		cout << "the FatherClass" << endl;
//	}
//
//	void Study()
//	{
//		cout << "Study" << endl;
//	}
//
//	~CFather()
//	{
//		cout << "FatherClass out" << endl;
//	}
//
//};
//
//class CChild :public CFather
//{
//public:
//
//	CChild(int b) :CFather(25)
//	{
//		cout << "the SonClass" << endl;
//	}
//
//	void GoToSchool()
//	{
//		cout << "Go to school" << endl;
//	}
//
//	~CChild()
//	{
//		cout << "SonClass out" << endl;
//	}
//
//};
//
//int main()
//{
//	/*
//	
//	析构函数与继承
//		与构造函数的调用顺序相反，在调用析构函数的时候，先调用子类的析构函数，再调用父类的析构函数
//	
//	*/
//	{
//		CChild xm(23);
//		//花括号表示代码体的结束，用于调用析构函数
//	}
//
//
//	system("pause");
//	return 0;
//}