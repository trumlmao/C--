#include <iostream>
using namespace std;

void InputArr (int[], int);
void OutputArr (int[], int);
void XoaPT (int[], int);

void InputArr (int A[], int n) {
	for (int i = 0; i < n; i++) {
		cout <<"["<<i<<"] = ";
		cin >> A[i];
	}
}
void OutputArr (int A[], int n) {
	cout <<"cac phan tu cua mang la: \n";
	for (int i = 0; i < n; i++) {
		cout <<"["<<i<<"] = "<< A[i] <<endl;
	}
}

int XoaPT (int A[], int n, int a) {
	a = 0;
	for (int i = 0; i < n - 1; i++) {
		for(int j = i +1; j < n; j++) {
			if (A[i] == A[j]) {
				a++;
				n--;
				for(int dem = j; dem < n; dem++) {
					A[dem] = A[ dem + 1];
					
				}
				
			}
		}
	}
	return a;
}

int main() {
	int n, a;	
	cout << "nhap so luong phan tu cua mang: ";
	cin >> n;
	int A[n];
	InputArr (A, n);
	OutputArr (A, n);
	a = XoaPT (A, n, a);
	n = n -a;
	cout << "mang sau khi xoa la: "<<endl;
	OutputArr (A, n);	
	
	
  return 0;
}

