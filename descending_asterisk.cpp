#include<iostream>
using namespace std;
int main()
/*
54321
54321
54321
54321
54321
*/
{
    for(int row=1;row<=5;row++)
    {
        for(int col=5;col>=1;--col)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}