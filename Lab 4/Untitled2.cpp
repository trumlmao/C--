
#include<iostream>
#include<math.h>
using namespace std;
	int n;
	int locso(float c)
	{
 	if ((float)sqrt(c) - (int)sqrt(c) == 0) return 1; // 
 	return 0;
	}
	void pitago()
	{
	 int a, b;
	 for (a = 2; a < n; a++)   // 
	 for (b = a; b < n; b++)
	 {
	  if (sqrt(a*a+b*b)>n){
	  
	  break;}
	  if (locso(a*a + b*b)) 
	  cout << " (" << a << "," << b << "," << sqrt(a*a + b*b) << ") \n";
	 }
	}
	int main()
	{
		cout << "nhap n: ",cin >>n;
	 	pitago();

	}

 

