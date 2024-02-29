#include<iostream>
using namespace std;
int main()
/*
1
22
333
4444
55555
666666
*/
{
    for(int row=1;row<=10;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}