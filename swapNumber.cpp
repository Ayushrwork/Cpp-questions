#include <iostream>
using namespace std;
int main(){
     int a,b,temp;
     cout<<"Enter the first number: ";
     cin>>a;
     cout<<"Enter the second number: ";
     cin>>b;
     temp = a;
     a = b;
     b = temp;
     cout<<"the swapped numbers are a is "<<a<<" and b is "<<b;
     return 0;
}