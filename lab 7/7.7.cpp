#include <iostream>
using namespace std;

void XuatHien (int[], int);
void InputArr (int[], int);
void OutputArr (int[], int);

void InputArr (int A[], int n) {
	for (int i = 0; i < n; i++) {
		cout <<"["<<i<<"] = ";
		cin >> A[i];
	}
}
void OutputArr (int A[], int n) {
	cout <<"gia tri cac phan tu cua mang la: \n";
	for (int i = 0; i < n; i++) {
		cout <<"["<<i<<"] = "<< A[i] <<endl;
	}
}

void XuatHien (int A[], int n) {
	
	for (int i = 0; i < n - 1; i++) {
		A[A[i] % n] =  A[A[i] % n] + n;	
	}	
	for (int i = 0; i < n; i++) {
		if (A[i] >= n * 2) {
			cout << i << " ";
		}
	}
}

int main() {
	int n;	
	cout << "nhap so luong phan tu cua mang: ";
	cin >> n;
	int A[n];
	InputArr (A, n);
	OutputArr (A, n);
	cout <<"Cac so xuat hien 2 lan trong mang la: "; 
	XuatHien (A, n);	
  
  return 0;
}

