
#include"which_to_run.h"
#ifdef PRA_LVALUE_RVALUE
#include<iostream>
#include<typeinfo>
#include<type_traits>
#include<vector>
using namespace std;

template<typename T>
void func(T&&)
{
    cout << "r_ref"<<endl;
}

template<typename T>
void func(const T&)
{
    cout <<"l_ref"<<endl;
}

int main()
{
    //why all are r_ref??
    int a = 10;
    //const int a = 10;
    func(a);
    func(10);
    a = 100;


}

#endif
