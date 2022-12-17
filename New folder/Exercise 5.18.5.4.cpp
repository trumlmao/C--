#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
int main(){
	fstream file;
	int n ,s = 0 ;
	cout<<"n = ";
	cin>>n;
	file.open ("bai5.4.txt",ios_base::out);
	for(int i = 1 ; i <= n ; i++)
		s+=pow(i,2)	;
	cout<<s;
	file<<s;
	file.close();
return 0;
}
