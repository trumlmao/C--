#include<iostream>
#include<fstream>
using namespace std;
int main () {
	int a, b, c;
	fstream file;
	cout<<"nhap ba so"<<"\na= ";
	cin>>a;
	cout<<"\nb= ";
	cin>>b;
	cout<<"\nc= ";
	cin>>c;
    file.open ("bai4.10.txt",ios_base::out);
	if (a > b){
		if (b >= c)
			file<<c<<endl<<b<<endl<<a;
		if (a <= c )
			file<<b<<endl<<a<<endl<<c;			
	}else {
		if(a >= c)
			file<<c<<endl<<a<<endl<<b;
		if (b <= c )
			file<<a<<endl<<b<<endl<<c;
	}
	file.close();
	return 0;
}
