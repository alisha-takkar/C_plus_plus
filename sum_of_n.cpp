// Program to compute the sum of first 'n' terms.

#include <iostream>
using namespace std;

int sum(int n)
{
    int sum =0;
    for(int i=0; i<=n; i++)
    {
        sum+=i;
    }
    return sum;
}

int main()
{
    int n;
    cout << " Enter a number: " ;
    cin >> n;
    cout << "Sum of "<< n << " digits is: " << sum(n);
}
