/*
虚继承
*/

//#include<iostream>
//using namespace std;
//
//class ClassA
//{
//public:
//
//	int a = 23;
//	void Show()
//	{
//		cout << "ClassA" << endl;
//	}
//};
//
//class ClassB :virtual public ClassA
//{
//public:
//
//	void Show()
//	{
//		cout << "ClassB" << endl;
//	}
//
//};
//
//class ClassC :virtual public ClassA
//{
//public:
//
//	void Show()
//	{
//		cout << "ClassC" << endl;
//	}
//
//};
//
//class ClassD :public ClassB,public ClassC
//{
//public:
//
//	void Show()
//	{
//		cout << "ClassD" << endl;
//	}
//
//};
//
//int main()
//{
//	/*
//	
//	多继承
//		1.多个子类
//		2.子类的子类
//		
//	虚继承
//		1.解决多继承中访问不明确的问题
//		2.在继承的过程中继承了使用权，而不是拷贝一份
//		3.在连续继承中，只要前置继承使用了虚继承，则后续继承不需要再次使用虚继承
//		4.不建议使用虚继承，结构复杂，内存开销比较大
//	
//	*/
//
//	ClassD cd1;
//	cd1.Show();
//	cd1.a;
//	/*
//	error C2385: 对“a”的访问不明确
//	message : 可能是“a”(位于基“ClassA”中)
//	message : 也可能是“a”(位于基“ClassA”中)
//	*/
//
//
//	system("pause");
//	return 0;
//}