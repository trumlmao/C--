s#include <iostream>

using namespace std;
int A[20][20];
int d ,c ;
int nhap(int B[20][20],int m , int  n)
{
	for(int i = 0; i<m;i++){
		for(int j = 0;j<n;j++)
			{
			cout<<"A["<<i<<","<<j<<"] = ";
			cin>>B[i][j];
		cout<<endl;}}
}
int xuatbinhthuong(int B[20][20],int m , int  n){
	for(int i = 0; i<m;i++){
		for(int j = 0;j<n;j++)
			{
				cout<<"A["<<i<<","<<j<<"] = ";
				cout<<B[i][j]<<"  ";
				
			}cout<<endl;
	}
}
int xuat(int B[20][20],int m , int  n)
{
	int tong = 0;
	int k;
	cout<<"so can chia  : ";
	cin>>k;
	for(int i = 0; i<m;i++){
		for(int j = 0;j<n;j++)
			{
			if (B[i][j]%k==0)
			{
				tong += B[i][j];
				cout<<"A["<<i<<","<<j<<"] = ";
				cout<<B[i][j]<<"  ";
				
			}
			else {
				cout<<"A["<<i<<","<<j<<"] = ";
				cout<<"/  ";
			}
		}cout<<endl;
	}
	cout<<"tong = "<<tong;
}
int xuatmax(int B[20][20],int m , int  n) {
	int g = 0;
	int h = 0;
	int max = B[0][0];
	int min = B[0][0];
	for(int i = 0; i <= m;i++){
		for(int j = 0;j <= n;j++)
			{
				
			if (max < B[i][j])
			{
				max = B[i][j];
			}

		}
	}
	cout<<"max = "<<max<<endl;
		for(int i = 0; i<m;i++){
		for(int j = 0;j<n;j++)
			{
				
			if (B[i][j] < min)
			{
			
				min = B[i][j];
			}
		}
	} cout<<"min = "<<min;
}
int xuatvitri(int B[20][20],int m , int  n){
	
	int a ; int b;
	cout<<" nhap a";
	cin>>a;
	
	cout<<"nhap b ";
	cin>>b;
	for(int i = 0; i<m;i++){
		for(int j = 0;j<n;j++)
			{	if ( a== i && b == j){
			
				cout<<"A["<<i<<","<<j<<"] = ";
				cout<<B[i][j]<<"  ";
				}
			}cout<<endl;
	}
}
int main(){
	cin>>d;
	cin>>c;
	nhap(A,d,c);
	xuatbinhthuong(A,d,c);		
	xuatmax(A,d,c);
	xuatvitri(A,d,c);
}

