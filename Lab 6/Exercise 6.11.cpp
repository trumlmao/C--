#include <iostream>

using namespace std;

int tinh(int  *radius){
	int &A = *radius ;
	cout <<endl<<"AREA: "<< A*A*3.14;	
}

int main(){
	int R;
	cin >> R;
	int *radius = &R;
	cout <<"Vi tri R: "<<&R<<endl;
	cout <<"Vi tri tro den: " <<radius;
	
	cout << endl<<"Vi tri con tro: "<<&radius;
	cout <<endl<<"Gia tri con tro: "<<*radius;
	tinh(radius);
	
}
