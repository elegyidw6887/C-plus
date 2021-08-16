/*
覆盖
*/

//#include<iostream>
//using namespace std;
//
//class CFather
//{
//public:
//
//	int cAge;
//
//	CFather(int a)
//	{
//		cAge = a;
//	}
//
//	void Show()
//	{
//		cout << cAge << endl;
//	}
//};
//
//class CChild:public CFather
//{
//public:
//
//	int cAge;
//
//	CChild(int b) :CFather(25)
//	{
//		cAge = b;
//	}
//
//	void Show()
//	{
//		cout << cAge << endl;
//	}
//
//	void ShowFather()
//	{
//		cout << CFather::cAge << endl;
//	}
//};
//
//int main()
//{
//	/*
//	
//	覆盖
//		与同名的局部变量与全局变量之间的关系相同：在局部位置，局部变量会屏蔽掉全局变量
//		同名的成员在子类与父类中，在调用子类的时候优先选取子类存在的对象
//	
//	*/
//
//	CChild xm(23);
//	xm.Show();
//	//结果为23
//	xm.ShowFather();
//	//在使用作用域之后可以正常输出父类的成员，结果为25
//
//
//	system("pause");
//	return 0;
//}