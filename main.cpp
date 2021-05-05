//Programmer: Brittany King
//Professor: Dr. T. McMillan
//Class: COSC-1437
//Date: 5/5/21

#include <bits/stdc++.h>
using namespace std;
 
int factorialR(int n)
{
   if(n<=1){
      return n;
   }
   return n*factorialR(n-1);//recursively calling factorialR
}
 
int main()
{
   int n;
   cout<<"Enter any number"<< endl; // get user input
   cin>>n;//taking input from user
   cout<<factorialR(n)<<endl;//calling recursive function 
   return 0;
}