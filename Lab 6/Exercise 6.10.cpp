#include <iostream>
#include <math.h>
using namespace std ;

int dem(int num){
	int dem;
	for (; num > 0; dem++){
		num /= 10;	
	}
	return dem;
}

bool tinh (int num,int dem){

	if (num == 0 ){
		cout << num <<"   "<< "false";
		return false;
	}
	else {
		for(int a = dem-2 ; a >= 0 ;a--){
			int tmp = 0 ;
			tmp = num/(pow(10,a));
			int b = 2;
			if ( (tmp%b) == 0){
				cout << tmp <<endl <<"true 0";
				return true;
			}else if((tmp%b) != 0) {
				
				return false;
				break;
			}
			
			b++;
			
		}
	}
}
int main(){
	int num;
	cin >> num;
	int d = dem(num);
	if(tinh(num,d)==true){
		cout << endl << "true";	
	}else if (tinh(num,d)==false){
		cout << endl << "false";
	}
	
}
