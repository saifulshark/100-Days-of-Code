#include<iostream>
using namespace std;
int main()
/*
         1
        121
       12321
      1234321
     123454321
    12345654321
   1234567654321
  123456787654321
 12345678987654321
12345678910987654321
*/
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=(n-row);col++)
        cout<<" ";
        for(int col=1;col<=row;col++)
        cout<<col;
        for(int col=(row-1);col>=1;col--)
        cout<<col;
        cout<<endl;
    }
    return 0;
}