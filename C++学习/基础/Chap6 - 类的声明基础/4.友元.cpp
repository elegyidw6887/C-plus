/*
友元
*/

//#include<iostream>
//using namespace std;
//
//class CPeople
//{
//private:
//
//	int age;
//	void Fun1()
//	{
//		age = 23;
//		cout << "Im a Function in the private class!" << endl;
//		cout << "Im 23 years old!" << endl;
//	}
//
//protected:
//
//	void Fun2()
//	{
//		
//		cout << "Im a Function in the protected class!" << endl;
//	}
//
//	friend void Fun();
//	//友元函数的声明，在声明之后，类内的私有内容就可以被声明的函数调用
//	//protected的内容也可以被调用
//	//声明了友元之后，相当于对友元函数公开
//	friend class CTeacher;
//	//友元类的声明
//};
//
//class CTeacher
//{
//public:
//
//	CPeople cp2;
//	void Fun3()
//	{
//
//		cp2.Fun1();
//	}
//};
//
//void Fun()
//{
//
//	CPeople cp1;
//	cp1.Fun1();
//	cp1.Fun2();
//}
//
//int main()
//{
//	/*
//	
//	友元：
//		当声明了一个private的类之后，如果想要让其他代码体也可以调用此私有类，可以通过声明一个友元来进行调用
//		（让私有的类对其他代码体可见）
//
//	友元函数：
//		在类中添加友元函数的声明
//
//	友元类：
//		与友元函数类似，也是可以让一个private或者protected的类被其他的代码体调用
//
//	友元的特点：
//		1.友元不受访问修饰符的影响
//		2.友元可以存在多个
//		3.友元破坏了类的封装性，访问修饰符作为权限来限制访问
//
//	接口函数：
//		为了针对一个private或者protected类型的类的数据的获取，C++的思想是使用接口函数，在类中声明一个public类型的函数来向外导出数据
//	
//	*/
//	Fun();
//	CTeacher ct1;
//	ct1.Fun3();
//
//
//	system("pause");
//	return 0;
//}