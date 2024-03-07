#include<iostream>
using namespace std;
int main()
/*
1
21
321
4321
54321
-----
987654321
*/
{
    for(int row=1;row<=9;row++)
    {
        for(int col=row;col>=1;col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}