#include<iostream>
using namespace std;
int main()
/*  1
   22
  333
 4444
55555
*/
{
    for(int row=1;row<=5;row++)
    {
        for(int col=1;col<=5-row;col++)
        cout<<" ";
        for(int i=row;i>=1;i--)
        cout<<row;
    cout<<endl;
    }
    return 0;
}