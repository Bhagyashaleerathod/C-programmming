// write a c++ program to calculate  factorial of a number .


#include<iostream>
using namespace std;
 int main()
{
int i, fact=1,number;
cout<<" enter any number";
cin>>number;
for( i=1 ; i<=number; i++)

{
	fact = fact*i;
}

cout<<"factorial of the given number" << number << "is : " << fact << endl;

return 0;
	
}
