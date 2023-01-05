#include <iostream>
using namespace std;

int A[100][100];
int d,c;
void MeNu() {
	cout <<"----MENU----\n"
		 <<"1. Tinh tong dong.\n"
		 <<"2. Tinh tong cot.\n"
		 <<"3. Tim Max Min dong.\n"
		 <<"4. Tim Max Min cot.\n"
		 <<"0. EXIT.\n";
}
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
void TongDong(int A[100][100], int d, int c, int n) {
	
	int sum = 0;
	for (int j = 0; j < c; j++) {
		sum += A[n][j];		
	}		
	cout <<"Tong cua dong "<<n<<" la: "<< sum << endl;			
}
void TongCot(int A[100][100], int d, int c, int m) {	
	int sum = 0;
	for (int i = 0; i < d; i++) {
		sum += A[i][m];		
	}
	cout <<"Tong cua cot "<<m<<" la: "<< sum << endl;			
}
void MaxMinDong(int A[100][100], int d, int c, int n) {
	int min = A[n][0];
	for (int j = 0; j < c; j++) {
		if (min > A[n][j])
			min = A[n][j];			
	}		
	cout <<"Min cua dong "<<n<<" la: "<< min << endl;
	int max = A[n][0];
	for (int j = 0; j < c; j++) {
		if (max < A[n][j])
			max = A[n][j];			
	}		
	cout <<"Max cua dong "<<n<<" la: "<< max << endl;	
}
void MaxMinCot(int A[100][100], int d, int c, int m) {
	int min = A[0][m];
	for (int i = 0; i < d; i++) {
		if (min > A[i][m])
			min = A[i][m];			
	}		
	cout <<"Min cua cot "<<m<<" la: "<< min << endl;
	int max = A[0][m];
	for (int i = 0; i < d; i++) {
		if (max < A[i][m])
			max = A[i][m];			
	}		
	cout <<"Max cua cot "<<m<<" la: "<< max << endl;	
}
int main() {
	int n, m, chon;
	cout<<"Nhap so dong: "; cin >> d;
	cout<<"Nhap so cot: "; cin >> c;
	Input(A, d, c);
	cout<<"\nMANG VUA TAO:\n";
	Output(A, d, c);	
	while (true) {
		MeNu();
		cout <<" Moi nhap lua chon: ";
		cin >> chon;
		if (chon == 0) break;
		switch(chon) {
			case 1:
				cout <<"Nhap dong muon tinh tong: ";
				cin >> n;
				TongDong(A, d, c, n);
				break;
			case 2:
				cout << "Nhap cot muon tinh tong: ";
				cin >> m;
				TongCot(A, d, c, m); 
				break;
			case 3:
				cout <<"Nhap dong muon tinh Max Min: ";
				cin >> n;
				MaxMinDong(A, d, c, n);
				break;
			case 4:
				cout <<"Nhap cot muon tinh Max Min: ";
				cin >> m;
				MaxMinCot(A, d, c, m);
				break;
			default: 
				cout <<"Ban da nhap sai lua chon!!!";
				while (chon < 1 || chon > 4) {
					cout <<"Moi nhap lai lua chon: ";
					cin >> chon;
				}		
		}
	}
 	
  return 0;
}

