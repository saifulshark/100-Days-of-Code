#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the Number here for Binary to Decimal: ";
    cin>>num;
    int mul=1,ans=0,rem;
    while (num>0)
    {   //need remainder
        rem= num%10;
        //last digit number
        num=num/10;
        //need answer by calculating it by rem(last digit)*mul(2)+previous answer
        ans=mul*rem+ans;
        //mul=mul*2(2^0+2^1+2^2+...)
        mul*=2;
    }
    cout<<ans<<endl;
    return 0;
}