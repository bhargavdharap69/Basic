#include<iostream>
int main()
{
    int i, n, sum=0;
    std::cout << "Enter till what number do you want the summation \n";
    std::cin >> n;
    for(i=1;i<=n;i++)
    {
        sum += i;
    }
    std::cout << "Sum of 1 to " << n << " = " << sum;
}