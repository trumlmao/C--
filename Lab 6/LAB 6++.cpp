#include <iostream>

using namespace std;


int rechoice(int B[20][20],int m , int  n);
int A[20][20];
int d ,c ;
int input(int B[20][20],int m , int  n)
{
	for(int i = 0; i<m;i++){
		for(int j = 0;j<n;j++)
			{
			cout<<"A["<<i<<","<<j<<"] = ";
			cin>>B[i][j];
		cout<<endl;}
		}
	rechoice(B,m,n);
	
}
void output(int B[20][20],int m , int  n){
	for(int i = 0; i<m;i++){
		for(int j = 0;j<n;j++)
			{
				cout<<"A["<<i<<","<<j<<"] = ";
				cout<<B[i][j]<<"  ";
				
			}cout<<endl;
	}
	rechoice(B,m,n);
}
void tbcong(int B[20][20],int m , int  n ){
	float sum;
	for(int i = 0; i<m;i++){
		for(int j = 0;j<n;j++)
			{
				sum += B[i][j];	
				
			}
	}
	cout <<"tb+ : " <<sum/(m*n);
	rechoice(B,m,n);
}
void choice(int B[20][20],int m , int  n );
int rechoice(int B[20][20],int m , int  n){
	int e;
	cout <<"\n1.end  // 2. rechoice\n";
	cin >> e;
	switch(e){
		case 1:
			return 0;
			break;
		case 2:
			choice(B,m,n);
			break;
			
	}
}
void choice(int B[20][20],int m , int  n ){
	cout <<"1.intput\n";
	cout <<"2. output"<<endl;
	cout <<"3. tb+"<<endl;
	cout <<"4.Max , min dong cot"<<endl;
	cout <<"5.tam giac tren duoi\n";
	int e; cin >>e;
	
	
	
	switch (e){
		case 1:
			input(B,m,n);
			
			break;
		case 2:
			output(B,m,n);
			
			break;
		case 3:
			tbcong(B,m,n);
			
			break;
			
			
			
	}
}



int main(){
	cin>>d;
	cin>>c;	
	choice(A,d,c);
	
}
