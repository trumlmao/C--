#include <iostream>
using namespace std;

int A[100][100];
int d,c;

void Input(int A[100][100],int d,int c) {
	for(int i=0;i<d;i++)
	for(int j=0;j<c;j++) {
		cout<<"A["<<i<<"]["<<j<<"] = ";
		cin>>A[i][j];
		
	}
}
void Output(int A[100][100],int d,int c) {
	for(int i=0;i<d;i++) {
		for(int j=0;j<c;j++)		
			cout<<"A["<<i<<"]["<<j<<"] = "<<A[i][j]<<"    ";
		cout<<"\n";		
	}
}

void TongDong(int A[100][100],int d,int c) {	
	for (int i = 0; i < d; i++) {
		int sum = 0;
		for (int j = 0; j < c; j++) {
			sum += A[i][j];		
		}
		cout <<"Tong cua dong "<<i<<" la: "<< sum << endl;		
	}
}

void TongCot(int A[100][100],int d,int c) {	
	for (int j = 0; j < c; j++) {
		int sum = 0;
		for (int i = 0; i < d; i++) {
			sum += A[i][j];		
		}
		cout <<"Tong cua cot "<<j<<" la: "<< sum << endl;		
	}
}

int main() {
	cout<<"Nhap so dong: "; cin >> d;
	cout<<"Nhap so cot: "; cin >> c;
	Input(A, d, c);
	cout<<"\nMANG VUA TAO:\n";
	Output(A, d, c);
	TongDong(A, d, c);
	TongCot(A, d, c);
  
  return 0;
}

