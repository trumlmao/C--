#include <iostream>
using namespace std;
int main(){
	float length1,length2;
	float width1,width2;
	float area1,area2;
	cout <<"nhap chieu dai cua hinh chu nhat thu nhat: ",cin >>length1;
	cout <<"nhap chieu rong cua hinh chu nhat thu nhat: ",cin >>width1;
	area1 = length1*width1;
	
	cout <<"nhap chieu dai cua hinh chu nhat thu hai: ",cin >>length2;
	cout <<"nhap chieu rong cua hinh chu nhat thu hai: ",cin >>width2;
	area2 = length2*width2;
	if (area1>area2){
		cout<< "hinh chu nhat thu nhat co dien tich lon hon hinh chu nhat thu hai";
	}else if(area2 <area1){
		cout<< "hinh chu nhat thu hai co dien tich lon hon hinh chu nhat thu nhat";
	}else{
		cout<<"hai hinh chu nhat co dien tich bang nhau";
	}
	
}
