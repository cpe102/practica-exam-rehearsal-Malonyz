#include<iostream>

using namespace std;
 
 
 int main(){
     float sum=0.0;
     float x =0.0;
    
     cout << "Enter X: ";
     cin >> x;
     while (x != 0){
         if (x > 0){
             sum = sum + x;
         }
         cout << "Enter X: ";
         cin >> x;

     }
     cout << "sum = " << sum;

 }

 
