// methord 1
// with temp function
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
// methord 2
// without temp variable
#include <iostream>
using namespace std;
int main(){
     int a,b;
     cout<<"Enter the first number: ";
     cin>>a;
     cout<<"Enter the second number: ";
     cin>>b;
     a = a + b;
     b = a - b;
     a = a - b;
     cout<<"the swapped numbers are a is "<<a<<" and b is "<<b;
     return 0;
}
// methord 3
// with * and / functions
// this don't work when a or b = 0
#include <iostream>
using namespace std;
int main(){
     while(true){
          int a,b;
          cout<<"Enter the first number: ";
          cin>>a;
          cout<<"Enter the second number: ";
          cin>>b;
          if (a == 0 || b == 0){
               cout<<"please enter a non zero integer"<<endl;
               cout<<"running again!"<<endl;
               continue;
          }
          a = a * b;
          b = a / b;
          a = a / b;
          cout<<"the swapped numbers are a "<<a<<" and b "<<b;
          break;
          return 0;
     }
}
