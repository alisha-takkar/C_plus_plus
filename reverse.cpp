// A program to reverse a number.

#include<iostream>
using namespace std;

void reverse(int n)
{
    int rev =0;
    while(n!=0)
    {
        int d = n%10;
        rev = rev*10+ d;
        n= (int)(n/10);
    }
    cout << "The reverse of the number is :" << rev ;
}

int main()
{
    int num;
    cout << "Enter an integer :- ";
    cin>> num;
    reverse(num);
    return 0;
}