/*
单例模式
*/

//#include<iostream>
//using namespace std;
//
//class CFather
//{
//private:
//
//	CFather()
//	{
//		cout << "Create Complete!" << endl;
//	}
//
//public:
//
//	static int cTarget;
//	static CFather* CreateObject()
//	{
//		if (1 == cTarget)
//		{
//			cTarget = 0;
//			return (new CFather);
//		}
//		else
//		{
//			return NULL;
//		}
//		
//	}
//	/*
//	static:
//		静态前缀
//	CFather*:
//		函数类型（类型为类指针）
//	CreateOhject:
//		函数名称
//	*/
//
//	~CFather()
//	{
//		cTarget = 1;
//	}
//};
//
//int CFather::cTarget = 1;
////静态成员类外初始化
//
//int main()
//{
//	/*
//	
//	单例：
//		一个类只能创建一个对象
//
//	单例模式实现：
//		1.将构造函数设定为：private/protected
//		2.通过静态成员函数申请对象空间，并返回地址
//		3.定义一个静态标记，记录对象的个数，并控制
//		4.析构函数，将标记清空，以达到重复申请对象的目的
//
//	其他：
//		1.赋值函数（"="的重载）、拷贝构造也要是有私有的，跟构造函数放在一起，就是完全的单例模式
//		2.单例模式是一种思想，实现方法有很多，并不单一，演示的只是其中一种方法
//		3.如果构造函数为private，则该构造函数能被继承，但是不能创建实例化对象
//	
//	*/
//
//	CFather* cf1 = CFather::CreateObject();
//	if (NULL == cf1)
//	{
//		cout << "Failed!" << endl;
//	}
//	delete cf1;
//
//	CFather* cf2 = CFather::CreateObject();
//
//
//	system("pause");
//	return 0;
//}