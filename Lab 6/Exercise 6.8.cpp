#include<iostream>
using namespace std;
int reoders( int X ){
	int a[10];
	int temp = 0,g = 0;
	int n = 0;
	int j = 0;
	
	while ( X % 10 != 0){
		n++;
		temp = X % 10;
		do	{
			a[j]= temp;
			j++;
		} while(j < n );
		X= X/10;
	}
	cout<<"ASC(x) = ";
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = i + 1 ; j < n ; j++)
		{
			if ( a[i] > a[j] ) {
				g = a[i];
				a[i] = a[j];
				a[j] = g;
			}	
		}
	}
	for (int i = 0; i < n ; i++)	cout<<a[i];
	cout<<"\nDESC(x) = ";
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = i + 1 ; j < n ; j++)
		{
			if ( a[i] < a[j] ) {
				g = a[i];
				a[i] = a[j];
				a[j] = g;
			}	
		}
	}
	for (int i = 0; i < n ; i++)	cout<<a[i];
}
int main(){
	int X;
	cin>>X;
	reoders(X);
}
	
