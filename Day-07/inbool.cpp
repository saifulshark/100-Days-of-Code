#include<iostream>
using namespace std;
int main()
{
    bool a=true,b=false;
    cout<<"Enter a=true and b=false in bool opertation: ";
    char charcoal;
    cin>>charcoal;
    if(charcoal=='a'){
        cout<<a;
    }
    else if(charcoal=='b')
    {
        cout<<b;
    }
    else{
        cout<<"Sorry!It's invalid input.";
    }
    return 0;
}