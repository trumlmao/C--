#include<iostream>
#include<math.h>

using namespace std;
int main(){
	int n ;
	double S = 0;
	cout<<"n = ";
	cin>>n;
	for (int i = 1 ; i <= n ; i++)	
		{
			if( n >= 1)
			  S += 1/pow(i,2);
			else 
			 cout<< " n bi loi ";
		} 
	cout<<"\nS = "<<S;
return 0 ;
}
