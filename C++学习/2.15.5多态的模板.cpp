/*
多态的模板
*/

//#include<iostream>
//using namespace std;
//
//template<typename CF1>
//class CFather
//{
//public:
//
//	CF1 i;
//
//	virtual void Show()
//	{
//		cout << "FatherClass" << endl << i << endl;
//	}
//};
//
//template<typename CS1,typename CS2,typename CS3>
//class CSon :public CFather<CS1>
//{
//public:
//
//	CS1 i;
//
//	virtual void Show()
//	{
//		cout << "SonClass" << endl << i << endl;
//	}
//};
//
//int main()
//{
//	/*
//	
//	多态的模板
//		(父类在使用模板之后，在后续任何出现父类名称的地方，必须要给父类使用<>来传递参数的类型，传递的个数由模板声明时的个数决定)
//	
//	*/
//
//	CFather<int>* cf1 = new CSon<int,char,double>;
//	cf1->Show();
//
//
//	system("pause");
//	return 0;
//}