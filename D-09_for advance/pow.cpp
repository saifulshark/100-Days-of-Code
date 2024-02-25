#include<iostream>
using namespace std;
int main()
{
    int num,pow,n;
    cout<<"Enter the Number and Power: ";
    cin>>num;
    cin>>pow;
    n=num;
    for(int i=1;i<pow;i++)
    {
        num=num*n;
    }
    cout<<num;
    return 0;
}