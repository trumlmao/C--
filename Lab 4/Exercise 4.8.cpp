#include <iostream>
using namespace std;
int main(){
	float quiz,mid,final,gpa;
	cout <<"quiz : ",cin >> quiz;
	cout <<"mid-term : ",cin >> mid;
	cout <<"final : ",cin >> final;
	gpa = (0.2*quiz ) + (0.3*mid) + (0.5*final);
	cout << "GPA : "<< gpa <<endl;
	if (gpa >= 8.5){
		cout << "grade A";	
	}else if (7.5 <= gpa && gpa < 8.5 ){
		cout << "grade B";
	}else if (5.5 <= gpa && gpa < 7.5){
		cout << "grade C";
	}else if (4 <= gpa && gpa< 5.5){
		cout << "grade D";
	}else if (gpa < 4 && gpa >= 0){
		cout << "grade F";
	}else {
		cout << "diem nhap vao khong hop le";
	}
}
