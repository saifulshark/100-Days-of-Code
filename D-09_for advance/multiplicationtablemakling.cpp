#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number for see the Multiplication Table: ";
    cin>>n;
    cout<<n<<"'s multiplication table is:"<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}