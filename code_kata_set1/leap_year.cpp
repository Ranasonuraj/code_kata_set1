#include<iostream>
using namespace std;
int main()
{

    int year;
//cout << "Enter a year: ";
    cin >> year;
if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << " yes ";
            else
                cout << " not ";
        }
        else
            cout << " yes ";
    }
    else
        cout << " not ";
    return 0;

}
