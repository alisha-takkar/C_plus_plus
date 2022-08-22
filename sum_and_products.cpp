//  A program to print the sum and product of digits of an integer. 

#include<iostream>
using namespace std;

void s_n_p(int num){
     int sum = 0, pro = 1; 
     while(num != 0){
           int dgt = (num%10);
           num = int(num / 10);
           sum += dgt;
           pro *= dgt;
     }
     cout<<"Sum of digits: "<<sum<<endl;
     cout<<"Product of digits: "<<pro;
}

int main(){
     int n;
     cout<<"Enter a number: ";
     cin>>n;

     s_n_p(n);
     return 0;
}
