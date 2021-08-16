/*
继承的构造函数调用顺序
*/

//#include<iostream>
//using namespace std;
//
//class CFundation
//{
//public:
//
//	CFundation()
//	{
//		cout << "the Father" << endl;
//	}
//	
//	void Study()
//	{
//		cout << "Study" << endl;
//	}
//
//};
//	
//class CChild:public CFundation
//{
//public:
//
//	CChild()
//	{
//		cout << "the Son" << endl;
//	}
//	
//	void GoToSchool()
//	{
//		cout << "Go to school" << endl;
//	}
//
//};
//
//int main()
//{
//	/*
//	
//	继承的构造函数调用顺序
//		在继承中，子类在对象的声明过程中，会先调用父类的构造函数再调用子类的构造函数
//	
//	*/
//
//	CChild xm;
//
//
//	system("pause");
//	return 0;
//}