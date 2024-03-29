#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of half of belt n:";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int space=1;space<=n-row;space++)
        {
            cout<<" ";
        }
        for(int asterisk=1;asterisk<=row;asterisk++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int row=n-1;row>=1;row--)
    {
        for(int space=1;space<=n-row;space++)
        {
            cout<<" ";
        }
        for(int asterisk=1;asterisk<=row;asterisk++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}