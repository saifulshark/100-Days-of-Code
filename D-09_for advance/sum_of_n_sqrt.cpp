#include<iostream>
using namespace std;
int main()
//1*1+2*2+3*3=ans
{
    int n,i,sum=0;
    cout<<"Enter the n of natural number:";
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    cout<<sum;
    return 0;
}