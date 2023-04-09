#include<iostream>
using namespace std;
int main()
{
    int i,max=0,array[1000],n;
    std::cout << "Enter the Number of Elements you want to find the largest and Smol Number from \n";
    cin >> n;
    array[1000] = array[n];
    std::cout << "Enter the respective Elements \n";
    for(int i=0;i<=(n-1);i++)
    {
            cin >> array[n];
    }
    std::cout << "The Largest Number in the following elements is:- \n";
    for(i=0;i<n;i++)
    {
        if(array[n]>max)
        max=array[n];
    }
    cout << max << "\n";
}