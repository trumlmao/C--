#include <iostream>

using namespace std;
int A[100],n;
void nhap(int A[100],int n){
	for (int i = 0 ; i< n;i++){
		cout << "A["<<i+1<<"] = ",cin >> A[i];
	}
	
}

void tinh(int A[100],int n){
	float even=0,odd=0;
	int even1=0,odd1=0;
	for (int i = 0 ; i <n;i++){
		if(A[i]%2 == 0){
			even = even + A[i];
			even1++;
		}
		else if(A[i]%2 != 0 ){
			odd = odd + A[i];
			odd1++;
		}
	}
	
	cout << "avg even: "<<even/even1<<endl;
	cout <<"avg odd: "<<odd/odd1;
	
}



int main(){
	cout <<"nhap so phan tu mang : ",cin >>n;
	nhap(A,n);
	tinh(A,n);
}







