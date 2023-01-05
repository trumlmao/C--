#include <iostream>
#include <math.h>
using namespace std;


bool nguyento(int t){
	for(int i=2; i<t; i++)
		if(t%i==0) 
			return false;
	return true;
}
	

int main(){
	int m,n;
	cout <<"nhap m ",cin >> m;
	cout <<"nhap n ",cin >> n;
	for(int i=m; i<=n; i++)
		if(nguyento(i)) 
			cout<<i<<endl;
}
