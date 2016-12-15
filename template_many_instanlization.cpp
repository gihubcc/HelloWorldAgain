
#include"which_to_run.h"
#ifdef PRA_16_20
#include<vector>
#include<iostream>
#include"template.h"
using namespace std;
void instanlazation_again()
{
    vector<string> vec(10,"hello");
    //vector<int> vec(10);
    display_container(vec);
}
#endif
