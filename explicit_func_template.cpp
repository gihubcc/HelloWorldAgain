#include"which_to_run.h"
#ifdef PRA_EXPLICIT_FUNC_TEMP
#include<iostream>
#include<typeinfo>
#include<type_traits>
#include<vector>
using namespace std;

template<typename IT>
auto display_a_element( IT it)
-> typename remove_reference<decltype(*it)>::type
{
    cout << typeid(decltype(*it)).name()<<endl;
    cout <<  *it <<endl;
    return *it;
}


template<typename T>
int compare(const T &a, const T &b)
{

    cout<<typeid(T).name()<<endl;
    if( a < b )
        return 0;
    else
        return 1;
}


int main()
{
    cout << compare(1,2) <<endl;
    cout << compare<string>("bc","abc") <<endl;
    vector<int> vec(10,1);
    auto it = vec.begin();
    //display_a_element(it) = 20;
    display_a_element(it);
    //cout << a<< endl;



}

#endif
