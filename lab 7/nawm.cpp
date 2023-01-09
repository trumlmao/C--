#include <iostream>

using namespace std;

int month2(int month,int year){
	switch (month) {
		case 1:
		case 3 :
		case 5 :
		case 7 : 
		case 8 :
		case 10 : 
		case 12 : {
			cout << "thang "<<month<<" co 31 ngay";
			
			break;
		}
		case 4:
		case 6 : 
		case 9 :
		case 11:{
			cout << "thang "<<month<<" co 30 ngay";
			break;
		}
		case 2 : {
			
			if (year % 4 == 0 && year % 100 != 0){
				cout << "thang "<<month<<" co 29 ngay";
			}else if (year % 400 == 0){
				cout << "thang "<<month<<" co 29 ngay";
			}else {
				cout << "thang "<<month<<" co 28 ngay";
			}
			break;
		}
			
	}
}
int year2(int year){
	if (year % 4 == 0 && year % 100 != 0){
		cout <<endl;
		cout << "nam "<<year<<" la nam nhuan";
	}else if (year % 400 == 0){
		cout <<endl;
		cout << "nam "<<year<<" la nam nhuan";
	}else {
		cout <<endl;
		cout << "nam "<<year<<" la nam ko nhuan";
	}
}


int main(){
	int month,year;
	cout <<"nhap nam : ",cin >> year;
	cout << "nhap thang : ",cin >> month;
	month2(month,year);
	year2(year);
	return 0;
}
