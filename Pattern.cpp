#include<iostream>
using namespace std;
int main()
{
   int i,j,rows,cols;
   char sym;
   cout << "Enter the character which you want the pattern of:- \n";
   cin >> sym;
   cout << "Enter the rows of the pattern \n";
   cin >> rows;
   cout << "Enter the cols of the pattern \n";
   cin >> cols;
   for ( i = 1; i <= rows; ++i)
   {
    for(j=1; j <= cols; ++j)
    {
        cout << sym;
    }
    cout << endl;
   }
}