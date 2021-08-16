/*
数据类型转换
*/

//#include<iostream>
//using namespace std;
//
//class CFather
//{
//public:
//
//	int cfN;
//
//	virtual void Show()
//	{
//
//	}
//};
//
//class CChild :public CFather
//{
//public:
//
//	int ccN;
//
//	void Show()
//	{
//
//	}
//};
//
//int main()
//{
//	/*
//	
//	新式类型转换：
//		static_cast
//		const_cast
//			类型转换掉表达式的const或volatile属性，仅当type和expression一样的时候，才合法
//			注意：转指针与转非指针，非指针要传地址或者引用
//			const_cast<CFather*>();
//			(去掉变量与指针的const修饰，之后用相同的类型接住处理完的数据)
//		dynamic_cast
//			继承关系的类对象之间的转换，三种转换情况：
//			1.子类转为父类
//			2.相同类型转换
//			3.父类转为子类(此时必须为多态才可以转换)
//		reinterpret_cast
//			用于天生危险类型转换，不推荐使用此种转换方式
//	
//	*/
//
//	const CFather* cfp1;
//	CChild* ccp2;
//	CFather* cfp2 = const_cast<CFather*>(cfp1);
//	//除去const前缀
//
//	cfp1 = dynamic_cast<CFather*>(ccp2);
//	//子类转为父类
//
//	CFather* cfp3;
//	CChild* ccp3;
//	ccp3 = dynamic_cast<CChild*> (cfp3);
//	//父类转为子类
//	/*
//	error C2683: “dynamic_cast”:“CFather”不是多态类型
//	*/
//
//	CFather* cfp4;
//	CChild* ccp4;
//	ccp4 = reinterpret_cast<CChild*>(cfp4);
//
//
//	system("pause");
//	return 0;
//}