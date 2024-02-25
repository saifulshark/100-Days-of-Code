#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 2 numbers:"<<endl;
    cin>>a>>b;
    if(a>b)
    cout<<a<<" is greater than "<<b<<endl;
    else if (b>a)
    cout<<b<<" is greater than "<<a<<endl;
    else 
    cout<<"Both are equal";
    return 0;
}