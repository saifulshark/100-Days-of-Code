#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your exam number:";
    cin>>num;
    if(num<33){
        cout<<"Sad for Fail!";
    }
    else{
        cout<<"Wow!You are passed!";
    }
    return 0;
}