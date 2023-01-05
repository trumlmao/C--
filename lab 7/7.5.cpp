#include <iostream>

using namespace std;

int n ;
int A[100];
void nhap(int A[100],int n){
	for (int i = 0 ; i< n;i++){
		cout << "A["<<i+1<<"] = ",cin >> A[i];
	}
	
}
int max(int A[100],int n){
	int max = 0;
	for (int i = 0;i<n;i++){
		if(A[0]<A[i]){
			A[0] = A[i];
		}
	}
	max = A[0];
	cout <<max<<endl;
	return max;
	
	
}
int min(int A[100],int n){
	int min = 0;
	for (int i = 1;i<n;i++){
		if(A[0]>A[i]){
			A[0] = A[i];
		}else{
			A[0]= A[0];
		}
	}
	min = A[0];
	cout <<min<<endl;
	return min;
	
	
}

int main(){
	
	cout << "nhap phan tu mang : ",cin >> n;
	
	nhap(A,n);
	
	float ma1 = max(A,n);
	
	float mi2 = min(A,n);
	cout <<endl<<"avg = "<<(ma1 + mi2)/2;
}
