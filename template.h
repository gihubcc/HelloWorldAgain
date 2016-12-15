#ifndef TEMPLATE_H
#define TEMPLATE_H

#include"which_to_run.h"
#include <iostream>
#ifdef PRA_16_20
using namespace std;
template<typename T>
void display_container(const T & c)
{

    T temp(c.begin(), c.end());
    for( typename T::iterator it = temp.begin();
         it != temp.end(); it++)
    {
        cout << *it << "\\";
    }

    typename T::value_type ele = *temp.begin();
    cout<<ele<<"\\";
    for( typename T::iterator it = temp.begin();
         it != temp.end(); it++)
    {
        cout << *it << "\\";
    }

    int a;
    int a;

    using c_size_t = typename T::size_type;
    using c_size_t = typename T::size_type;
    for(c_size_t i = 0; i < c.size();i++)
    {
        cout<<c[i]<<"  \\";
    }
}
#endif

#endif // TEMPLATE_H
