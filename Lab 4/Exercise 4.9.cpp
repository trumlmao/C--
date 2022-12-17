#include <iostream>

using namespace std;
int main(){
	int year,month;
	cout <<"Nhap nam :",cin >>year;
	cout <<"Nhap thang: ",cin >> month;
	switch (month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << " Thang " << month << " cua nam " << year << " co 31 ngay";
		break;
		case 4:
		case 6:
		case 9:
		case 11:	
			cout << " Thang " << month << " cua nam " << year << " co 30 ngay";
		break;
		case 2:{
			if ((year % 100 == 0) &&(year % 400 == 0)){
			cout << " Thang " << month << " cua nam " << year << " co 29 ngay";
			}else{
				cout << " Thang " << month << " cua nam " << year << " co 28 ngay";
			}
			
		}
		break;
			
	}
	return 0;
	
	
	
}
