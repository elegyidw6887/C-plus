/*
访问修饰符public与private
*/

//#include<iostream>
//using namespace std;
//
//class CPeople
//{
//public:
//
//	int a;
//	//默认为private
//public:
//	void Fun()
//	{
//
//		cout << "Fun" << ' ' << a << endl;
//	}//public修饰
//private:
//	void Fun()
//	{
//
//		cout << "Fun" << ' ' << a << endl;
//	}//private修饰
//};
//
//int main()
//{
//	/*
//	
//	访问修饰符
//		在类声明后，在代码体中添加public之后，可以在任何位置调用类中的内容，如果不添加public，则会被默认为private类型，只有类内的可以相互使用
//		而且public与private在类中可以对指定部分的内容进行修饰，而且作用范围是从当前关键字到下一个关键字或者类的结束
//
//	拓展功能：
//		访问修饰符可以作为一个工具来给类的成员进行分类
//		同时设置为private之后也能够带来一定的安全性，防止外部修改
//	
//	*/
//
//
//	system("pause");
//	return 0;
//}