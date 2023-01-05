#include <iostream>

using namespace std;

string A[100];
int n;

void nhap(string A[100],int n){
	
	for (int i = 0 ; i< n;i++){
		cout << "A["<<i<<"] = ",cin >> A[i];
	}
	
}
void tinh(string A[100],int n){
	int da;
	cout <<"nhap da: ",cin >>da;
	n++;
	for(int i = n ; i > da;i--){
		A[i] = A[i-1];
	}
	cout <<"nhap gtri dien : ", cin >> A[da];
	for (int f =0 ; f < n;f++){
		cout << " |"<<A[f]<<" ";
	}
}


int main(){
	cout << "nhap : ";cin >>n;
	nhap(A,n);
	tinh(A,n);
}

