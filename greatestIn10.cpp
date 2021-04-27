#include <iostream>
using namespace std;
int main(){
     int numberOfElements;
     // can be changed 
     float arr[10];
     cout<<"How many elements: ";
     cin>>numberOfElements;
     // loop that will add each element in the array
     for(int i = 0; i < numberOfElements; ++i){
          cout<<"Enter the "<<i+1<<" element: ";
          cin>>arr[i];
     }
     for(int i=1; i< numberOfElements; ++i){
          if(arr[0]< arr[i]){
               arr[0] = arr[i] ;
          }
     }
     cout<<"The greatest number is :"<<arr[0];

     return 0; 
}