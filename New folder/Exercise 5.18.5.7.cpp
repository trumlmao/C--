#include<iostream>
#include<fstream>
using namespace std;
 int main(){
 	int n ;
 	int sum = 0;
 	cout<<"nhap n = ";
 	cin>>n;
 	fstream file;
	file.open("bài 5.7",ios_base::out); 
 	for(int i = 0 ; i <= n; i+=2 )
		{
			sum = sum + i;
		}
	cout<<sum;
	file<<sum;
	file.close();
	return 0;
 }
