#include<iostream>
using namespace std;
int main ()
{
char xyz;
//cout<<"Enter a Character:";
 cin>>xyz;
 if(xyz>='a' && xyz<='z' || xyz>='A' && xyz<='Z')
 {
    cout<<"Alphabet";
 }
 else
 {
     cout<<"No";
 }
 return 0;
}
