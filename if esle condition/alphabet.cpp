#include<iostream>
using namespace std;
int main()
{
    char c;
    int isLowercaseVowel, isuppercaseVowel;
    cout<<"Enter an alphabet:"<<endl;
    cin>>c;
    isLowercaseVowel=(c=='a'||c=='e'||c=='o'||c=='u');
    isuppercaseVowel=(c=='A'||c=='E'||c=='O'||c=='U');
    if(isLowercaseVowel||isuppercaseVowel)
        cout<<c<<" is a vowel"<<endl;
    else{
        cout<<c<<" is a consonant"<<endl;
    }

    return 0;
