#include <iostream>

using namespace std;

int inm(int m ){
	for(int i = 1 ; i <=m;i++){
		cout << "*"<<" ";
	}
}

int main(){
	int m,n;
	cout << "Nhap m: ",cin >> m;
	cout << "Nhap n: ",cin >> n;
	
	for(int d = 0; d < n;d++){
	
		inm(m);
		cout << endl;
	}
		
	
	
}
