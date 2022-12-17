#include<iostream>
using namespace std;
 int main(){
 	int sum = 0,i = 1;
 	int n;
	cout<<"input : ";
	cin>> n;
	if ( n <= 0 ) cout<<"\noutput : N";
	else {
		while ( sum + i < n  )
		{	
			i++;
			sum = sum + i;
		}
	cout<<"\noutput : "<<i;
	}
return 0;
 }
