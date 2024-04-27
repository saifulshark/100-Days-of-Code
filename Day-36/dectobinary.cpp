#include<iostream>
using namespace std;
int main()
{
    int num,rem,ans=0,mul=1;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    while (num>0)
    {
    //remainder
    rem=num%2;
    //quotient
    num/=2;
    //ans
    ans+=rem*mul;
    //mul
    mul*=10;
    }
    cout<<ans<<endl;
    return 0;
}