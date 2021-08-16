/*
类模板
*/

//#include<iostream>
//using namespace std;
//
//template<typename T>
//class CFather
//{
//public:
//	
//	T i;
//	CFather(T a)
//	{
//		i = a;
//	}
//
//	void Show();
//
//};
//
//template<typename T>
//void CFather<T>::Show()
//{
//	cout << i << endl;
//}
////类外定义函数需要用到作用域运算符，此时的CFather也需要参数列表
//
//int main()
//{
//	/*
//	
//	类模板
//		定义与函数模板类似，但是类模板需要模板参数列表
//		除了类之外，其他任何位置出现类的时候，都要添加类模板参数列表
//
//	类外函数实现
//		在多文件中，函数的定义一般放在类外
//	
//	*/
//
//	CFather<char> cf1('A');
//	/*
//	error C2955: “CFather”: 使用 类 模板 需要 模板 参数列表
//	*/
//	cf1.Show();
//
//	CFather<int>* cf2 = new CFather<int>(23);
//	cf2->Show();
//
//
//	system("pause");
//	return 0;
//}