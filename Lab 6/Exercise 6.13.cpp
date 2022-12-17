#include <iostream>

using namespace std;


void tinh(int &a,int &b){
	int tmp ;
	tmp = a;
	a = b;
	b = tmp;
	cout << "SWAP: "<<endl;
	cout <<"a: "<< a << endl<<"b: "<<b;
}


int main(){
	int a , b ;
	cout << " Nhap a : ",cin >> a;
	cout << " Nhap b : ", cin >> b;
	
	int *c = &a;
	int *d = &b;
	tinh(*c,*d);
	
}
