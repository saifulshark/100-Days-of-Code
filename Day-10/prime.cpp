#include<iostream>
using namespace std;

//prime checker condition is n>2 and n%i not equal to 0;

int main()
{
    int n;
    cout<<"Please enter a number to check it's a Prime or not:"<<endl;
    cin>>n;
    if(n<2)
    {
        cout<<n<<"is not a prime number.";
        return 0;
    }
    else
    {
        for(int i=2;i<n;i++)
        {
        if(n%i==0)
        {
            cout<<n<<"is not a prime number.";
            return 0;
        }
        }
    }
    cout<<n<<" is a Prime number!";
    return 0;
}