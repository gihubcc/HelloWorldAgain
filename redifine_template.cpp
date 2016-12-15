#include"which_to_run.h"
#include <iostream>
#include<vector>
using namespace std;
template<class T>
void foo( T a)
{
    cout << a << "template in 0.cpp" <<endl;
}

void func_1()
{
    foo(100);
}
