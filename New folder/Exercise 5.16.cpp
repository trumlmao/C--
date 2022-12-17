#include<iostream>
using namespace std;

int main(){
	string  n ;
	int a = 0;
	cout<<" n = ";
	cin>> n;
	for (int i = 0 ; i <= n.length(); i++){
		if ( n[i] % 2 == 1) {
		cout<< n[i]; 
		a= a+1;	
		}
	}
	if(a == 0) cout<<" N ";
return 0;
}
