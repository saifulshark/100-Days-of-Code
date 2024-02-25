#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number:"<<endl;
    cin>>a;
    if(a>0)
    cout<<"the number is positive";
    else
    {
        if(a==0)
        cout<<"the number is zero";
        else
        cout<<"the number is negative"; //(when it is only  one line, we can write like this. But when it is more than one line, then we have to give karli-braces in conditionals)
        return 0;
    }
}