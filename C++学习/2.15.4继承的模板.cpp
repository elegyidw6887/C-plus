/*
继承的模板
*/

#include<iostream>
using namespace std;

template<typename T>
class CFather
{
public:

	T i;
	CFather(T a)
	{
		i = a;
	}

	void Show()
	{
		cout << i << endl;
	}

};

template<typename T>
class CSon :public CFather<T>
{
public:

	T i;
	CSon(T a) :CFather<T>(23)
	{
		i = a;
	}

};

int main()
{
	/*
	
	继承的模板
		在继承中，子类的继承处的CFather也需要添加模板参数列表
	
	*/

	CSon<int> cs1(25);
	cs1.Show();


	system("pause");
	return 0;
}