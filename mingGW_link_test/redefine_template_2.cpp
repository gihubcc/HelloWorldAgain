//1.cpp
//#include <iostream>
//#include<vector>
//using namespace std;
#include<stdio.h>
//2.cpp
void func_1();
template<class T>
void foo( T a)
{
    //cout << a*100 << "template in 2.cpp" <<endl;
    printf("template in 2.cpp");
}

void func_2()
{
    foo(100);
}

int main()
{
    func_2();
    func_1();

}
