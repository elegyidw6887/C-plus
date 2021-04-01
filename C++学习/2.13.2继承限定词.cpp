/*
继承限定词
*/

//#include<iostream>
//using namespace std;
//
//class CFundation
//{
//public:
//
//	void Study()
//	{
//		cout << "Study" << endl;
//	}
//
//protected:
//	/*
//	protected类型的成员，在继承之后只能在父类与子类中使用，不可以在类外使用
//	*/
//
//	void Rest()
//	{
//		cout << "Rest" << endl;
//	}
//
//private:
//
//	void Father()
//	{
//		cout << "Im the Father class" << endl;
//	}
//};
//
//class CChild:public CFundation
//{
//public:
//
//	void GoToSchool()
//	{
//		cout << "Go to school" << endl;
//	}
//};
//
//int main()
//{
//	/*
//	
//	继承限定词
//		在继承之后，子类可以任意使用父类中的类成员，而且在子类调用父类的过程中，不会对父类产生任何改变
//		对于父类中的
//		protected与private类型的成员，在继承之后类型不变，无法在类外调用
//
//	使用protected进行继承：
//		在使用protected进行继承之后，会将public类型的成员降低为protected类型的成员，也就是降低为继承等级的成员
//		低级或者同级的成员类型不变
//	
//	*/
//
//	CChild cc1;
//	cc1.Study();
//	/*
//	error C3867: “CFundation::Study”: 非标准语法；请使用 "&" 来创建指向成员的指针
//	函数调用不要忘记加括号()
//	*/
//	CChild* cc2 = new CChild;
//	cc2->Study();
//	delete(cc2);
//
//
//	system("pause");
//	return 0;
//}