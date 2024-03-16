#include<iostream>
using namespace std;
int main()
/*
    1
   22
  333
 4444
55555
*/

{
    int n;
cout<<"Enter n numbers for resulting the magic: ";
cin>>n;
       for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<row;
        }
        cout<<endl;
    }
    return 0;
}