#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n here:";
    cin>>n;
    for(int row=n;row>=1;row--)
    {
        for(int asterisk=1;asterisk<=row;asterisk++)
        {
            cout<<"*";
        }
        for(int space=1;space<=(2*n-2*row);space++)
        {
            cout<<" ";
        }
        for(int asterisk=1;asterisk<=row;asterisk++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

        for(int row=1;row<=n;row++)
    {
        for(int asterisk=1;asterisk<=row;asterisk++)
        {
            cout<<"*";
        }
        for(int space=1;space<=(2*n-2*row);space++)
        {
            cout<<" ";
        }
        for(int asterisk=1;asterisk<=row;asterisk++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}