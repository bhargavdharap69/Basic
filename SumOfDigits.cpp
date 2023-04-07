#include<iostream>
using namespace std;
int main()
{
    int num,rem,sum =0;
    std::cout << "Enter the Number:-";
    std::cin >> num;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    std::cout << sum;
}