#include <iostream>

using namespace std;


int tinh(int n){
	int da=1;
	for ( int i = 1;i <= n;i++){
		da *= i ;
	}
	return da;
}
int tinh2(int n,int k){
	return tinh(n)/(tinh(k)*tinh(n-k));
	
}

int main(){
	int n ;
	cout <<"nhap n: ",cin >>n;
	cout <<tinh(n)<<endl;
	int k;
	cout <<"nhap k: ",cin >>k;
	cout << tinh2(n,k);
}
