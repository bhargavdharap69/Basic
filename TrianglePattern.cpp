#include<iostream>
using namespace std;
int main()
{
    int rows,i,j;
    char sym;
    {
        cout << "Enter the number of Rows \n";
        cin >> rows;
        cout << "Enter the character of which you want to make the Triangle Pattern \n";
        cin >> sym;    
    for (i = 1; i <= rows; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            cout << sym;
        } 
            cout << "\n";
    }  
    }  
}