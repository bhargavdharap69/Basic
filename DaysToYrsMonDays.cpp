#include<iostream>
using namespace std;
int main()
{
    int inp_days,yrs,mon,rem_days,days;
    std::cout << "Enter the Number of Days:- \n";
    std::cin >> inp_days;
    yrs = inp_days / 365;
    rem_days = inp_days % 365;
    mon = rem_days / 30;
    days = rem_days%30;
    cout << "The Number of years = " << yrs << "\n";
    cout << "The Number of months = " << mon << "\n";
    cout << "The Number of days = " << days << "\n";
}