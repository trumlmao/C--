#include <iostream>
#include <math.h>
using namespace std;

int nguyento(int n){
	int i = 1, uoc=0;
	do{
		if(n%i==0){
		
		uoc++;}
		i++;
		
	}while(i<=n);
	if (uoc == 2)
		return n;
	else 
	 return 1;
	
}
int nhan(int &n){
	int a = 1,tmp=0 ;
	for(int i = 1;tmp < n;i++ ){
	
		int b = nguyento(i);
		cout << b<<endl;
		a = a*b;
		if (b > 1)
			tmp++;	
		}
	cout << a;
		
	
}

int main(){
	int n;
	cout << " NHAP n : ",cin >> n;
	nhan(n);
	
	
}





