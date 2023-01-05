#include <iostream>

using namespace std ;

void tinh(int a , int b){
	float x;
	if (a>0){
	
	cout <<	"x > "<<-b/a;
			}
	else if (a<0){
	cout <<"x <"<<-b/a;
	}
	
}



int main(){
	float a,b;
	cin >> a;
	cin >> b;
	
	tinh(a,b);	
}
