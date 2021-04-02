/*
虚函数的注意点
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
//	int cN;
//
//	void Show()//子类函数默认为virtual类型
//	{
//		cout << "SonClass" << endl;
//	}
//};
//
//int main()
//{
//	/*
//	
//	虚函数的注意点：
//
//		重写：与覆盖相类似，但是有virtual关键词，这样的一对函数之间的关系为重写（子类重写父类）
//
//		如果父类函数存在参数，子类没有参数，则会出现调用问题，二者需要形式完全相同（返回值等的也需要相同）
//
//		虚函数不能是内联函数（inline），会自动去除inline前缀，无法生效
//
//		虚函数不能是构造函数，构造函数只能添加inline前缀
//	
//	*/
//
//	CFather* cfa1 = new CChild;
//	cfa1->Show();
//
//
//	system("pause");
//	return 0;
//}