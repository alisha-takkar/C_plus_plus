// program to print the sum of 1/n terms.

#include <iostream>
using namespace std;

float sum(int n)
{
    float sum =0.00;
    for(float i=1; i<=n; i++)
    {
        sum += (1/i);
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << " Sum of " <<n << " terms is: " <<sum(n); 
}