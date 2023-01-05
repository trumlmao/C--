#include <iostream>
using namespace std;

void InputArr (int[], int);
void OutputArr (int[], int);

void InputArr (int A[], int n) {
	for (int i = 0; i < n; i++) {
		cout <<"["<<i<<"] = ";
		cin >> A[i];
	}
}
void OutputArr (int A[], int n) {
	for (int i = 0; i < n; i++) {
		cout <<"["<<i<<"] = "<< A[i] <<endl;
	}
}
void ThayThe(int A[], int B[], int n) {
	for (int i = 0; i < n; i++) {
		A[i] = A[i] * B[i];
	}
}
int main() {
	int n;	
	cout << "nhap so luong phan tu cua mang: ";
	cin >> n;
	int A[n], B[n];
	cout <<"Nhap phan tu mang A: \n";
	InputArr (A, n);
	cout <<"Nhap phan tu mang B: \n";
	InputArr (B, n);
	cout <<"Mang A vua tao la: \n";
	OutputArr (A, n);	
	cout <<"Mang B vua tao la: \n";
	OutputArr (B, n);
	ThayThe (A, B, n);
	cout <<"Mang A sau khi thay the la: \n";
	OutputArr (A, n);
	
  return 0;
}

