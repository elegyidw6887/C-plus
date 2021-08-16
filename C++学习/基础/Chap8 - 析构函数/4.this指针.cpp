/*
this指针
*/

//#include<iostream>
//using namespace std;
//
//class CPeople
//{
//public:
//
//	int a;
//	CPeople(int a)
//	{
//		this->a = a;
//		//如果参数与变量同名称时，使用this指针来区别二者
//		this->show();
//		//使用this指针来访问类中的函数
//	}
//
//	void show()
//	{
//		cout << a << endl;
//	}
//
//	CPeople* GetAddr()
//	{
//		return this;
//	}
//
//};
//
//int main()
//{
//	/*
//	
//	this指针：
//		为类相关内容
//		由于this指针的特性，其类型为对应的对象的类型，指向当前的对象，可以使用此指针来对类的成员进行访问
//		this指针是对象相绑定的，只有存在对象才存在this指针
//		同样的this指针不是类的成员，本质是类成员函数的隐含参数，而且不能在函数之外使用
//	
//	*/
//	CPeople cp1(25);
//	cout << cp1.GetAddr() << endl;
//	cout << &cp1 << endl;
//	//测试可得，this指针与对象相绑定，二者返回的指针均相同
//
//
//	system("pause");
//	return 0;
//}