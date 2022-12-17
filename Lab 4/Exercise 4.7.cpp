#include <iostream>
using namespace std;

int main(){
	double us;
	int num;
	
	cout<< ("Chon loai tien te muon quy  doi : \n");
	cout<< ("1.Euro \n");
	cout<< ("2.Japanese Yen \n");
	cout<< ("3.British Pound \n");
	cout<< ("4.Vietnamese Dong \n");
	cin >> num;
	
	if (us> 0){
		
		switch (num) {
			case 1:
				cout << ("nhap gia tri muon quy doi: ") , cin >> us;
				cout << us << " US dollar = " << us * 1.01 <<" Euro";
			break;
	
			case 2:
				cout << ("nhap gia tri muon quy doi: ") , cin >> us;
				cout<< us << " US dollar = " << us * 148.44 <<" Japanese Yen";
			break;
			case 3:
				cout << ("nhap gia tri muon quy doi: ") , cin >> us;
				cout<< us << " US dollar = " << us * 0.87 <<" British Pound";
			break;
			case 4:
	    		cout << ("nhap gia tri muon quy doi: ") , cin >> us; 
				cout<< us << " US dollar = " << us * 24840 <<" Vietnamese Dong";
			break;
			default:
			cout << ("chon lua khong hop le");
		}
	}else{
		cout << ("gia tri khong hop le");
		return 0;
		}
	return 0;
}
