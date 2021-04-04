/*
内部类(嵌套类)
*/

//#include<iostream>
//using namespace std;
//
//class COUT
//{
//public:
//
//	//外部类
//	int aOUT;
//
//	COUT()
//	{
//		aOUT = 23;
//	}
//
//public:
//
//	//内部类的创建
//	class CIN
//	{
//	public:
//
//		int aIN;
//
//		CIN()
//		{
//			aIN = 25;
//		}
//
//		void FunIN()
//		{
//			COUT co1;
//			cout << co1.aOUT << endl;
//			/*
//			内部类直接使用外部类的成员
//			error C2327: “COUT::aOUT”: 不是类型名称、静态或枚举数
//			error C2065: “aOUT”: 未声明的标识符
//			*/
//		}
//
//	};
//
//public:
//
//	//主函数中通过外部类来调用内部类
//	CIN ci1;
//
//	void FunOUT()
//	{
//		cout << ci1.aIN << endl;
//	}
//
//};
//
//int main()
//{
//	/*
//	
//	内部类(嵌套类)
//		内部类与外部类的相互调用
//		如果要对内部类与外部类之间来回数值改变，需要通过指针与地址实现
//	
//	*/
//	COUT co2;
//	co2.FunOUT();
//	co2.ci1.FunIN();
//
//
//	system("pause");
//	return 0;
//}