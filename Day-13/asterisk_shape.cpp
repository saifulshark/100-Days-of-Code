#include<iostream>
using namespace std;
int main()
/*
  12345
  12345
  12345
  12345
*/
{
    for(int col=1;col<=5;col++)
    {
        for(int row=1;row<=5;row++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}