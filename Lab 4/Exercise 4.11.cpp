#include <iostream>
#include <fstream>
using namespace std;

int main(){
	float a , b, c;
	cout << "nhap goc dau tien cua tam giac:  " ,cin >> a;
	cout << "nhap goc thu hai cua tam giac:  " ,cin >> b;
	cout << "nhap goc thu ba cua tam giac:  " ,cin >> c;
	fstream file;
	file.open("Exercise4.11.txt");
	file << a << endl;
	file << b << endl;
	file << c << endl;
	
	


	if (((a + b + c) == 180)){
		cout << "Is a triangles" << endl;
		if ((a == b )&&(a== c )){
			cout << "E";
		}else if ((a == b)||(a == c)||(b == c )){
			cout << "I";
		}else {
			cout << "S";
		}
	}else {
		cout << "Not triangles.";
		return 0 ; 
	}
}
