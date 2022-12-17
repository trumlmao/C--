#include <iostream>

using namespace std;
int main(){
	float angles1,angles2,angles3;
	cout <<"nhap goc thu nhat: ", cin >> angles1;
	cout <<"nhap goc thu hai: ", cin >> angles2;
	cout <<"nhap goc thu ba: ",cin>>  angles3;
	if ( angles1<180 && angles2<180 && angles3<180&&(angles1+angles2+angles3)==180){
		if(((angles1+angles2) < 180)&&((angles2+angles3)<180)&& ((angles3+angles1)<180))
		cout <<"goc nhap vao hop le";
		else{
		cout <<"goc nhap vao khong hop le";
		}
	}else{
		cout <<"goc nhap vao khong hop le";
	}
	
}
