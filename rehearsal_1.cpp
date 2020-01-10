#include<iostream>

using namespace std;
 
 
 int main(){
    string y;
    float x;
     cout << "What is your name? :";
     cin >> y;
     cout << "What is your GPA :";
     cin >> x;
     string a = " Inw Jrim Jrim!!!";
     string b = "Try harder, ";
     string u;

     if (x >= 3.5){
         u = y+a;

     } else {
         u = b+y;

     }

     cout << u;
     
     
 }
 




