#include <iostream>
#include <math.h>
using namespace std;

int demso(int n)
{
    int dem = 0;
    while (n > 0)
    {
        n /= 10;
        ++dem;
    }
    return dem;
}

bool Armstrong(int n)
{	
    int thutu = demso(n);
    int tmp = n, sum = 0, conlai;
    while (tmp > 0)
    {
        conlai = tmp % 10; 
        tmp /= 10;       
        sum += pow(conlai, thutu);
    }
    if (sum == n)
        return true;
    return false;
}
bool prime(int a){
	
	for (int i = 2 ; i < a;i++ ){
		if(a%i == 0){
			return false;
		}return true;
	}
	
	
}
int menu(){
	cout<< "------MENU------"<<endl;
	cout << "1.ARMSTRONG"<<endl;
	cout << "2.PRIME"<<endl;
	cout << "3.FINISH"<<endl;
	int n ;
	cout << "Choose (1,2,3) : ",cin >> n;
	switch (n){
	case 1: 
		int num;
		cout << "nhap so : ",cin >> num;
		if (Armstrong(num) == true){
        cout<< num << " la so armstrong" ;
    	}else {
    	cout <<num <<  " khong phai la so armstrong " ;
		}
		break;
	case 2:
		int a;
		cout << "nhap so : ",cin >> a;
		if (prime(a) == true)
		cout <<a << " la so nguyen to";
		else 
		cout <<a <<" khong phai la so nguyen to";
		break;
	
	case 3:
		char c;
		cout << "Do you want to finish (c/k) : ",cin >>c;
		if (int(c)== 99){
			cout << "See you again !";
		}else if (int(c)== 121){
			menu();
		}else
			cout <<"DD"<< int(c);
		break;	
}
}
int main() {
	menu();
}


