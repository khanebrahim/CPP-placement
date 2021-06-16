#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int min,max;
    if(n1>n2){
        max=1;
        min=n2;
        cout<<"max"<<endl;
    }
    else{

        max=n2;
        min=n1;
        cout<<"min"<<endl;
    }
    return 0;

}