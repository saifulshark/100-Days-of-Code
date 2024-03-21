#include<iostream>
using namespace std;
int main()
/*
    1
   21
  321
 4321
54321
*/
{for(int row=1;row<=5;row++)
    {
        for(int col=1;col<=5-row;col++)
        cout<<" ";
        for(int i=row;i>=1;i--)
        cout<<i;
    cout<<endl;
    }
    return 0;
}