#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    if(x==y){
        cout<<"both the numbers are equal"<<endl;
    }
    else if(x>y){
        cout<<"x is greater than y"<<endl;
    }
    else{
        cout<<"y is greater than x"<<endl;
    }
    return 0;
}
