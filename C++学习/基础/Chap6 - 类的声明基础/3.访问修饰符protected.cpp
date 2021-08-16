/*
访问修饰符protected
*/

//#include<iostream>
//using namespace std;
//
//class CPeople
//{
//protected:
//
//	int a;
//	void Fun()
//	{
//
//		cout << "Im a Funtion in the class with protected tag!" << endl;
//	}
//};
//
//class CXM : public CPeople
//{
//public:
//
//	void Fun1()
//	{
//		Fun();
//	}
//};//一个类的子类，目前不要求学习
//
//int main()
//{
//	/*
//	
//	C++结构体：
//		在C++的结构体中，默认为public，由于C++中的结构体是一个特殊的类，因此也可以使用public与private来给结构体进行分类与修改
//
//	访问修饰符protected：
//		1.对于其他的类、函数以及主函数等部分无法进行调用
//		2.对于子类，可以进行调用
//
//	三类访问修饰符的对比：
//		1.public：没有任何访问限制，任何代码块都可以使用
//		2.protected：有一定的访问限制，只能在类内和子类中使用
//		3.private：访问限制最强，只能在当前类中进行使用
//	
//	*/
//	CXM cp1;
//	cp1.Fun1();
//
//
//	system("pause");
//	return 0;
//}