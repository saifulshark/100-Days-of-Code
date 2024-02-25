#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<18){
        cout<<"Arrest him, not a voter! the age-"<< age;
    }
    else
    {
        cout<<"A good voter!";
    }
}