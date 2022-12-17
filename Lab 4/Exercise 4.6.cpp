#include <iostream>
#include <math.h>
using namespace std;

int main(){
	float a ,b,c,delta;
	
	cout <<"nhap he so a: " , cin >>a;
	cout <<"nhap he so b: ",cin >>b;
	cout <<"nhap he so c: ",cin >> c;
	delta=pow(b,2)-4*a*c;
	cout <<delta;
	if (delta<0){
		cout<<"phuong trinh vo nghiem";
		
	}else if (delta == 0){
		cout<<"phuong trinh co nhiem kep x1 = x2 = "<<-b/2*a;
		
	}else {
		cout<<"phuong trinh co hai nghiem \n";
		cout<<"x1 = "<< ((-b + sqrt(delta))/(2*a)) <<endl;
		cout<<"x2 = "<< ((-b - sqrt(delta))/(2*a));
	}
	return 0;
}
