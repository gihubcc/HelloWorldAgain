//using namespace std;
#include<stdio.h>
template<class T>
class c1
{
public:
	T nouse;
	int a;
	func()
	{
		printf("mem func in 0.cpp\n");
	}
};

void func_1()
{
    //foo(100);
    c1<int> a;
    a.func();
    a.a = 0.1;
    printf("%lf\n",a.a);
    // a.a = 0.1;
    // printf();
}