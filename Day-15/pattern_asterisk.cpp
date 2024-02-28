#include<iostream>
using namespace std;
int main()
/*
12345
678910
1112131415
1617181920
2122232425
*/
{
    for(int row=1;row<=5;row++)
    {
        for(int col=1;col<=5;col++)
        {
            cout<<(row-1)*5+col<<" ";
        }
        cout<<endl;
    }
    return 0;
}