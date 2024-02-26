#include<iostream>
using namespace std;
int main()
/*
abcde
abcde
abcde
abcde
abcde
*/
{
    for(int row=1;row<=5;row++)
    {
        for(char col='a';col<='e';col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}