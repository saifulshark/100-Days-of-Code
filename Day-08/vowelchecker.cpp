#include<iostream>
using namespace std;
int main()
{
    char x;
    cout<<"Enter a char to check:";
    cin>>x;
    if(x=='e'||x=='E'||x=='a'||x=='A'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U')
    {
    cout<<"It is a vowel";
    }
    else
    cout<<"It is a consonant";
    return 0;
}