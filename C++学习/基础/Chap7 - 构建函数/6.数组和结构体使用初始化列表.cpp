/*
数组和结构体使用初始化列表
*/

//#include<iostream>
//using namespace std;
//
//struct TeaInfo
//{
//	int Age;
//	double High;
//};
//
//class CPeople
//{
//public:
//
//	int a[5];
//	//CPeople() :a()
//	//{
//	//	//使用此种方式来让数组使用初始化列表，初始化结果全为0，此种方法不一定全部编译器都允许
//	//}
//
//	CPeople()
//	{
//		//error C2512: “CPeople”: 没有合适的默认构造函数可用
//	}
//
//	TeaInfo tea1;
//	CPeople(TeaInfo tea) :tea1(tea)
//	{
//		memset(&a[0], 0, 20);
//	}
//
//	void show()
//	{
//		cout << tea1.Age << ' ' << tea1.High << endl;
//	}
//};
//
//struct StuInfo
//{
//	int Age;
//	double High;
//};
//
//int main()
//{
//	/*
//	
//	数组使用初始化列表
//		>int a[5];
//		>CPeople() :a()
//		由于不是所有的编译器都允许以上使用方式，因此可以使用其他的方式进行【初始化】
//		1.for循环
//			老生常谈
//		2.memset
//			memset(&a[0] , 0 , 20);
//
//	结构体使用初始化列表：
//		由于结构体中不允许直接添加函数，因此我们需要将结构体放到类中，使用类中定义的构造函数来使用初始化列表来进行初始化
//	
//	*/
//	CPeople cp1;
//	cout << cp1.a[0] << ' ' << cp1.a[1] << ' ' << endl;
//
//	StuInfo stu1 = { 23,173.0 };
//	StuInfo stu2 = stu1;
//	//结构体之间相互赋值
//	cout << stu2.Age << ' ' << stu2.High << endl;
//
//	TeaInfo tea2 = { 25,168.0 };
//	CPeople cp2 = tea2;
//	cp2.show();
//
//
//	system("pause");
//	return 0;
//}