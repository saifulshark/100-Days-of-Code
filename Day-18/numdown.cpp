#include<iostream>
using namespace std;
int main()
/*
12345
1234
123
12
1
*/
{
        for(int row=5;row>=1;row--)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}