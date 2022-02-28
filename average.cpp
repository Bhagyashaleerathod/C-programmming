
// Take 5 integers from keyboard using loop and print their average value on the screen.

#include<iostream>
using namespace std;
int main()
      {
      	
	int n,sum, average ;
	
	
      	cout < "enter the any five values : ";
      	cin >> n;
      	
      	for(int counter=1 ; counter<=n ; counter++)
      	
      	{
      		sum= sum + counter;
		  
	}
		  cout<<"addition is " << sum;
		  
	
		    average = sum/5;

             cout << "average : "<< average << endl ;
		  
		  
		  return 0;      	
	  }

