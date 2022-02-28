// Write a program to reverse a number.

#include<iostream>

using namespace std;
 int main(){
 	
 	int number;
 	int rev = 0;
 	
 	cout << " enter any number  : "  << endl;
 	cin>> number;
 	 while (number > 0)
 	 {
 	 	rev = rev * 10 ;
 	 	rev = rev +number % 10 ;
 	 	number = number /10 ;
 	 	
    }
 
    cout<<"Reverse number is: "<<rev;
 
    return 0;

 }
 
