#include <iostream>

using namespace std;

int add(int a, int b)
{	
	
	return a + b;
}
float add(float a,float b){
	
	return a + b;
}
double add(double a, double b)
{	
	
	return a + b;
}



int main(){
	int a,b ;
	float c,d;
	double e,f;
	cout << "Nhap a : ",cin >> a;
	cout << "Nhap b : ",cin >> b;
	cout << "Nhap c : ",cin >> c;
	cout << "Nhap d : ",cin >> d;
	cout << "Nhap e : ",cin >> e;
	cout << "Nhap f : ",cin >> f;
	cout <<"Sum int: "<<add(a,b)<<endl;
	cout <<"Sum float: "<<add(c,d)<<endl;
	cout <<"Sum double: "<<add(e,f);

	
}
