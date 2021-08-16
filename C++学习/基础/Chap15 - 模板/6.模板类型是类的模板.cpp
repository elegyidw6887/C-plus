/*
模板类型是类的模板
*/

#include<iostream>
using namespace std;


ostream& operator<<(ostream& ost, CType<char>& ct)
{
	ost << ct.a;
	return ost;
}

template<typename CT>
class CType
{
public:

	char a = 'A';

};

template<typename CF1>
class CFather
{
public:

	CFather(CType<char>& ct)
	{
		cout << ct << endl;
		//如果要正常输出，需要对运算符进行重载
	}

	void Show()
	{
		cout << "FatherClass" << endl;
	}

};

int main()
{
	/*
	
	模板类型是类的模板
		(代码存在错误，还需要修改)
	
	*/

	CType<char> ct1;
	CFather<CType<char>> cf1(ct1);
	cf1.Show();


	system("pause");
	return 0;
}