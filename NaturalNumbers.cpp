#include<iostream>
using namespace std;
int main()
{
    int i,n,sum = 0;
    cout << "Till what number you want the natural numbers:- \n";
    cin >> n;
    cout << "The Natural Numbers upto " << n << " are:- \n";
    for(i=1;i<=n;i++)
    {
        cout << i << " ";
        sum= sum + i;
    }
    cout << "The Sum of All Natural Numbers are:- \n" << sum;
    return 0;
}