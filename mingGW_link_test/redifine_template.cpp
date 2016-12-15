//0.cpp
//#include <iostream>
//#include<vector>
//using namespace std;
#include<stdio.h>
template<class T>
void foo( T a)
{
    //cout << a << "template in 0.cpp" <<endl;
    //int a;
    int b;
    printf("template in 0.cpp" );
}

void func_1()
{
    foo(100);
}
