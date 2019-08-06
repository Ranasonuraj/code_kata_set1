#include<iostream>
using namespace std;
int main()
{
    char z;
    cin>>z;

    if (z=='a' || z=='e' || z=='i' || z=='o'|| z=='u' || z=='A' || z=='E' || z=='I' || z=='O'|| z=='U'){
        cout<<"Vowel";
    }
    else if((z>='a' && z<='z') || (z>='A' && z<='Z')){
        cout<<"Consonant";
    }
    else{
        cout<<"Invalid";
    }
    return 0;
}


