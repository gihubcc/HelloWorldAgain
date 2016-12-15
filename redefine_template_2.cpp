#include"which_to_run.h"
#include <iostream>
#include<vector>
using namespace std;

//2.cpp
void func_1();
template<class T>
void foo( T a)
{
    cout << a*100 << "template in 2.cpp" <<endl;
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
