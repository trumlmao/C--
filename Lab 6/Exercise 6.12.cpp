#include <iostream>

using namespace std;

void tinh(int &c){
	int a = 1;
	for (int i = 1 ; i <= c;i++){
		a *= i;
		
	}
	cout << a;
	
}


int main(){
	int a , b ;
	cout << "Nhap giai thua so : ",cin >> a;
	int *c = &a;
	cout << &c<<endl;
	
	tinh(*c);
		
}
