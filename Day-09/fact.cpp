#include<iostream>
using namespace std;
int main()
//n!=n*(n-1)*....*3*2*1
{
    int n,fact;
    cout<<"Enter the number for showing nth factorial:"<<endl;
    cin>>n;
    fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}