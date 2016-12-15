//1.cpp

#include<stdio.h>
template<class T>
class c1
{
public:
	T nouse;
	double a;
	func()
	{
		printf("mem func in 1.cpp\n");
	}
};

 extern template class c1<int>; 
void func_1();
int main()
{

	func_1();
	c1<int> a;
	a.a = 0.618;
	printf("%lf\n",a.a);
	a.func();
}