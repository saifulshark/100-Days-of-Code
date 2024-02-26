#include<iostream>
using namespace std;
int main()
/*
aaaaa
bbbbb
ccccc
ddddd
eeeee
*/
{
    for(char row='a';row<='e';row++)
    {
        for(int col=1;col<=5;col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}