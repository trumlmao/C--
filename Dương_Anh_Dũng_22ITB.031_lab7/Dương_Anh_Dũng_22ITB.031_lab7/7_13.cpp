#include <iostream>
using namespace std;

int MaxArr (int[], int);
void InputArr (int[], int);
void OutputArr (int[], int);

void InputArr (int A[], int n) {
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		A[i] = a;
		
	}
}
void OutputArr (int A[], int n) {
	for (int i = 0; i < n; i++) {
		cout << A[i] <<" ";
	}
}

int MaxArr (int A[], int n) {
	int max = A[0];
	for (int i = 0; i < n; i++) {
		if (max < A[i]) 
			max = A[i];
	}
	return max;
}
int DemSoLanXH (int A[], int n) {
	int dem = 0, max;
	max =  MaxArr(A, n);
	for (int i = 0; i < n; i++) {
		if (A[i] == max ) 
			dem++;
	}
	return dem;
}

int main() {
	int n, max, dem;	
	cin >> n;
	int A[n];
	InputArr (A, n);
	OutputArr (A, n);
	max = MaxArr(A, n);
	cout << "\n"<<max<<endl;
	dem = DemSoLanXH(A, n);
	cout << dem;
  return 0;
}

