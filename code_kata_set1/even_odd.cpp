#include<iostream>
using namespace std;
bool isEven(int n)
{
return (n % 2 == 0);
}
int main()
{
int n ;
cin>>n;
if(n<0)
    cout<<"invalid";
else {
    isEven(n)? cout << "Even" :
           cout << "Odd";
}


return 0;
}
