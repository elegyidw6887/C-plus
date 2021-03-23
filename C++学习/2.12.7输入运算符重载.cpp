/*
输入运算符重载
*/

//#include<iostream>
//using namespace std;
//
//class CExample
//{
//private:
//
//	int cAge;
//	double cHigh;
//
//public:
//
//	CExample()
//	{
//		cAge = 23;
//		cHigh = 173.0;
//	}
//
//	void Show()
//	{
//		cout << cAge << endl;
//		cout << cHigh << endl;
//	}
//
//	friend istream& operator>>(istream& is, CExample& ce);
//};
//
//istream& operator>>(istream& is, CExample& ce)
//{
//	is >> ce.cAge >> ce.cHigh;
//
//	if (is.fail())
//	{
//		ce.cAge = 0;
//		ce.cHigh = 0;
//		cout << "!Fail!" << endl;
//	}
//
//	return is;
//}
////此时的右参数不可为const类型
//
//int main()
//{
//	/*
//	
//	输入运算符重载
//		基本形式与输出运算符重载形式相似，但是右参数不可为const类型，因为要对其数值进行修改
//		输入与输出的一个区别为输入运算符重载会在输入时检测是否有效
//		istream重载中存在一个.fail()成员，用于在输入时检测是否匹配，如果不匹配就会返回0，与if循环搭配可以起到警告效果
//
//	*/
//	CExample ce1;
//	/*ce1.Show();
//
//	cout << "请输入一个数值" << endl;*/
//	cin >> ce1;
//	ce1.Show();
//
//
//	system("pause");
//	return 0;
//}