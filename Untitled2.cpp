#include <iostream>

using namespace std;

int tinh(float a1,float a2,float b1,float b2,float c1,float c2){
	float x = (c1*b2-c2*b1)/(a1*b2 - a2*b1);
	float y = (a1*c2-a2*c1)/(a1*b2 - a2*b1);
	cout << "x = "<< x<<endl;
	cout << " y = "<< y;
	return x , y;
}


int main(){
	float a1,b1,c1,a2,b2,c2;
	cout <<"nhap a1 : ",cin >> a1;
	cout <<"nhap b1 : ",cin >> b1;
	cout <<"nhap c1 : ",cin >>c1;
	cout <<"nhap a2 : ",cin >> a2;
	cout <<"nhap b2: ",cin >> b2;
	cout <<"nhap c2 : ",cin >> c2;
	tinh(a1,a2,b1,b2,c1,c2);

	
}

