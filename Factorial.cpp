#include<iostream>
using namespace std;
int main()
{
    int num,fac;
    cout << "Enter the Number which you want the Factorial of:- \n";
    cin >> num;
    fac=1;
    while (num>=1)
    {
        fac=fac*num;
        num=num-1;
    }
    cout << fac;
}