
// Print multiplication table of 17, 37 and 115 using loop.


#include <iostream>
using namespace std;
 
int main()
{
    int n = 17;  
    int b = 37;
    int c = 115;
    for (int i = 1; i <= 10; ++i)
    {
	
        cout << n << " * " << i << " = " 
             << n * i << endl;
     }
     cout<<endl;
     
      for (int i = 1; i <= 10; ++i)
        {
	
        cout << b << " * " << i << " = " 
             << b * i << endl;
     }
     cout<<endl;
     
     
      for (int i = 1; i <= 10; ++i)
        {
	
        cout << c << " * " << i << " = " 
             << c * i << endl;
     }
     
     
    
    return 0;
}
