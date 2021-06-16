#include<iostream>
using namespace std;
int main()
{
    int sidea,sideb,sidec;
    cin>>sidea>>sideb>>sidec;
    cout<<"input three sides of triangle:\n"<<endl;
    if(sidea==sideb&&sideb==sidec){
      cout<<"this is an equilateral triangle.\n"<<endl;  
    }
    else if (sidea==sideb||sidea==sidec||sideb==sidec)
    {
        cout<<"this is an isosceles triangle.\n"<<endl;
    }
    else{
        cout<<"this is a scalene triangle.\n"<<endl;
    }
    return 0;

}