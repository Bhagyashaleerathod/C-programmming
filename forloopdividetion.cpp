//Write  program to find the sum of all integer between 100 and 750 which are divisible by 9 .



#include<iostream>
using namespace std;

int main()
{
    int i, sum = 0;
   
   
    cout << " Numbers between 100 and 750, divisible by  9 : " << endl;
    
    for (i = 101; i < 750; i++) 
    {
        if (i % 9 == 0) 
        {
            cout << " " << i;
            sum += i;
        }
    }
    
    
    cout << "\n The sum : " << sum << endl;
    
    return 0;
}
