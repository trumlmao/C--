#include<iostream>
#include<fstream>
using namespace std ;
int main(){
	int n, sum = 1;
	cout<<"n = ";
	cin>>n;
	fstream file;
	file.open("bài 5.8",ios_base::out); 
	for (int i = 1 ; i <= n ; i++ )
		sum = sum*i;
	cout<<sum;
	file<<sum;
	file.close();
}
