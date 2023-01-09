#include <iostream>

using namespace std;

struct sv{
	int MaSV;
	string HtSV;
	int ns;
	int SDT;
	float DTB; 
};
void menu();  	
int n;
sv SV[100];
void nhap(){
	int a,b;
	for (a = 0;a<n;a++ ){
	
		cout << "MaSV : ",	cin >>SV[a].MaSV ;
		cout <<"Hoten ",cin >>	SV[a].HtSV ;
		cout <<	"nawm sinh ",cin >>SV[a].ns ;
			
		cout <<	"So dien thoai ",cin>>SV[a].SDT;
		cout <<	"diem tb: ",cin>>SV[a].DTB;
		
	}
	cout <<endl;
	menu();
	
}
void xuat(){
	int a;
	for (a = 0;a<n;a++ ){
	
		cout <<	SV[a].MaSV<<"\t" ;
		cout <<	SV[a].HtSV <<"\t";
		cout <<	SV[a].ns <<"\t";	
		cout <<	SV[a].SDT<<"\t";
		cout <<	SV[a].DTB<<"\t";
		cout <<endl;
	}
	cout <<endl;
	menu();
}
void xuatno(){
	for (int a = 0;a < n; a++){
		
		if (SV[a].DTB < 5){
			cout << SV[a].HtSV<<endl;
		}
	}
	cout <<endl;
	menu();
}
void chen(){ 
	int b;
	cout << "vi tri chen : ",cin >>b;
	n++;
	for(int a = n-1 ; a>b;a--){
		
		SV[a].MaSV = SV[a-1].MaSV;
		SV[a].HtSV = SV[a-1].HtSV;
		SV[a].ns = SV[a-1].ns;
		SV[a].SDT = SV[a-1].SDT;
		SV[a].DTB = SV[a-1].DTB;
	}
	cout << "MaSV : ",	cin >>SV[b].MaSV ;
	cout <<"Hoten ",cin >>	SV[b].HtSV ;
	cout <<	"nawm sinh ",cin >>SV[b].ns ;
			
	cout <<	"So dien thoai ",cin>>SV[b].SDT;
	cout <<	"diem tb: ",cin>>SV[b].DTB;
	cout <<endl;
	menu();

}
void xoa(){
	int b;
	cout << "vi tri chen : ",cin >>b;
	
	SV[b].MaSV = 0;
	SV[b].HtSV = "0";
	SV[b].ns = 0;
	SV[b].SDT = 0;
	SV[b].DTB = 0;
	for(int a = n-1 ; a>b;a--){
		
		SV[a-1].MaSV = SV[a].MaSV;
		SV[a-1].HtSV = SV[a].HtSV;
		SV[a-1].ns = SV[a].ns;
		SV[a-1].SDT = SV[a].SDT;
		SV[a-1].DTB = SV[a].DTB;
	}
	n--;
	menu();
}
void menu(){
	int a;
	cout<< " 1. nhap lai";
	cout <<"2 xuat ";
	cout <<"3.xuat no";
	cout <<"4. chen ";
	cout <<"5.xoa ";
	cin >> a;
	switch (a){
		case 1 : {
			nhap();
			break;
		}
		case 2 : {
			xuat();
			break;
		}
		case 3 : {
			xuatno();
			break;
		}case 4 : {
			chen();
			break;
		}case 5:{
			xoa();
			break;	
		}
		
	}
	
	
	
}
int main(){
	cout << "nhap so sinh vien : ",cin >> n;
	//menu(SV,n);
	nhap();
	xuat();
	
	
}
