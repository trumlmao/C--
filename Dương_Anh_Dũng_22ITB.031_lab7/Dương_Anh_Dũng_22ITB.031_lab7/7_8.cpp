#include <iostream>
using namespace std;

int MaxArr (int[], int);
int MinArr (int[], int);
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

void ChenMang(int A[], int n) {
	int a, x;
	cout <<"Nhap vi tri can chen: ";
	cin >> a;
	cout <<"nhap gia tri cua phan tu muon chen:  ";
	cin >> x;
	for (int i = n - 1 ; i > a; i--) {
		A[i] = A[i - 1];
	}
	A[a] = x;	
}

int main() {
	int n;	
	cout << "nhap so luong phan tu cua mang: ";
	cin >> n;
	int A[n];
	InputArr (A, n);
	OutputArr (A, n);
	n += 1; 
	ChenMang (A, n);
	cout << "mang sau khi chen la: ";
	OutputArr (A, n);
	
  
  return 0;
}

