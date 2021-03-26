/*
运算符重载返回地址
*/

//#include<iostream>
//using namespace std;
//
//class CExample
//{
//public:
//
//	int cA;
//	int cB;
//	int cC;
//	int cD;
//	int cError = -1;
//
//	CExample()
//	{
//		cA = 12;
//		cB = 34;
//		cC = 56;
//		cD = 78;
//	}
//
//	void* operator[](int n)
//	{
//		switch (n)
//		{
//		case 0:
//			return &this->cA;
//		case 1:
//			return &this->cB;
//		case 2:
//			return &this->cC;
//		case 3:
//			return &this->cD;
//		}
//		return &this->cError;
//	}
//
//};
//
//int main()
//{
//	/*
//	
//	运算符重载返回地址
//		在下标运算符重载中，如果有多种不同的数据类型，则可以通过返回地址来做到
//		
//	void*类型返回值
//		由于void*是通用的指针类型，没有固定的空间大小，因此在传递的时候没有问题，但是在取地址的时候会出现错误
//		可以通过类型强转来解决取地址的报错问题
//		虽然这种方法可以实现，但是不推荐使用此种方法
//	
//	*/
//	CExample ce1;
//	cout << *(int*)ce1[0] << endl;
//
//
//	system("pause");
//	return 0;
//}