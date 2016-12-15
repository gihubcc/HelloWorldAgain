#include"which_to_run.h"
#include <iostream>
#include<vector>
#include<typeinfo>
#ifdef PRA_16_20
using namespace std;
template<typename T>
void display_container(const T & c)
{
    //type_info tf = typeid(T);

    //int a;
    //int a;
    cout <<"type of T is :"<<typeid(T).name()<<endl;
    using c_size_t = typename T::size_type;
    for(c_size_t i = 0; i < c.size();i++)
    {
        cout<<c[i]<<endl;
    }
}


void instanlazation_again();

int main(int argc, char *argv[])
{
    //vector<string>::size_type;
    //cout << "Hello World!" << endl;
    vector<string> vec_str(10,"hello");

    display_container(vec_str);

    instanlazation_again();
    return 0;
}
#endif
