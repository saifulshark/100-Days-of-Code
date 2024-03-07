#include<iostream>
using namespace std;
int main()
/*
a
bb
ccc
dddd
eeeee
*/
{
    int row,col,n;
    cout<<"Enter the 'n' number to see magic:" <<endl;
    cin>>n;
    for(row=1;row<=n;row++)
    {
        char name='a'+row-1;
        for(col=1;col<=row;col++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}