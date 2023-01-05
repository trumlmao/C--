#include <iostream>
using namespace std;
int A[20][20];
void menu();
int r,c;
void case2(int A[20][20],int r,int c){
	for (int i = 0;i < r;i ++){
		for ( int f = 0 ; f < c ; f++){
			cout <<"A["<<i<<"]["<<f<<"] : ",cin >> A[i][f];
		}
	}
	menu();
}
void case3(int A[20][20],int r,int c){
	int f,sum=0;
	cout <<"nhap dong :",cin >>f;
	for (int i = 0 ; i<= c;i++){
		sum += A[f][i];
	}
	cout <<sum;
	menu();
}
void case4(int A[20][20],int r,int c){
	int f,sum=0;
	cout <<"nhap dong :",cin >>f;
	for (int i = 0 ; i<= c;i++){
		sum += A[i][f];
	}
	cout <<sum;
	menu();
}
void case5(int A[20][20], int d, int c, int n) {
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
	menu();
}
void case6(int A[20][20], int d, int c, int m) {
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
	menu();	
}


void menu(){	
	cout <<"---MENU---\n";
	cout <<"1.Tao mang 2 chieu\n";
	cout <<"2.Nhap\n";
	cout <<"3.Sum dong\n";
	cout <<"4.Sum cot\n";
	cout <<"5.Lon nho cot\n";
	cout <<"6.Lon nho hang\n";
	cout <<"7.Thoat ";
	int n;
	cin >> n;
	switch (n) {
	
		case 1 :{
			cout <<"nhap row: ",cin >> r;
			cout <<"nhap collum:  ",cin >> c;
			menu();
			break;
		}		
			
		case 2:{
			case2(A,r,c);
			break;
		}
			
		case 3 :{
			case3(A,r,c);
			break;
		}
			
		case 4 :{
			case4(A,r,c);
			break;
		}
			
		case 5 :{
			case5(A,r,c);
			break;
		}
			
		case 6 :{
			case6(A,r,c);
			break;
		}
		case 7 :{
			return 0;
			break;
		}
	}
	
}

int main(){
	menu();
	
}
