#include <iostream>
#include <math.h>
using namespace std;

int tinh(int a , int b){
	
	cout <<  b*pow(a,b-1);
}







int main(){
	int x , y;
	cout << "nhap x : ", cin >> x;
	cout << "nhap y : ", cin >> y;
	tinh(x,y);
	
}
