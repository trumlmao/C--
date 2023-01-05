#include <iostream>

using namespace std;

int gcd(int a , int b){
	if (a == 0 || b == 0){
		return a + b;
	}
	while (a!=b){
		if (a > b){
			a -= b;
		}else{
			b -= a;
		}
	}
	return a;
}
int main (){
	int a ,b ;
	cout <<"nhap a : ",cin >> a;
	cout <<"nhap b : ",cin >> b;
	cout << "ucln : "<<gcd(a,b)<<endl;
	cout << "bcnn : "<< (a*b)/gcd(a,b);
}
