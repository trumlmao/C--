#include <iostream>

using namespace std;
int A[100],n,B[100];
void nhap(int A[100],int n){
	
	for (int i = 0 ; i< n;i++){
		cout << "A["<<i<<"] = ",cin >> A[i];
	}
	
}
void nhap2(int B[100],int n){
	
	for (int i = 0 ; i< n;i++){
		cout << "B["<<i<<"] = ",cin >> B[i];
	}
	
}
void nhan(int A[100],int B[100],int n){
	for (int i = 0 ; i < n; i++){
		cout << "C["<<i<<"] = "<<A[i]*B[i]<<"   ";
	}
}

int main(){
	cout <<"nhap n : ",cin >> n;
	nhap(A,n);
	nhap2(B,n);
	nhan(A,B,n);
	
}
