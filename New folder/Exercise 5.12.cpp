#include <iostream>
using namespace std;
int fibonacci(int);
int main()
{
   int count, c = 0, i;
   cout<<"Nh?p v�o s? lu?ng c�c s? trong chu?i Fibonacci: ";cin>>count;
   cout<<"\n chu?i Fibonacci l�: \n";
   for ( i = 1 ; i <= count ; i++ )
   {
      cout<<"F"<< c << " = "<<fibonacci(c)<<endl;
      c++; 
   }
   
}
int fibonacci(int n)
{
   if ( n == 0 )
     return 0;
   else if ( n == 1 )
     return 1;
   else
     return ( fibonacci(n-1) + fibonacci(n-2) );
}
