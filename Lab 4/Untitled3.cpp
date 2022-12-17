#include <iostream>
using namespace std;
int main (){
	int n,sum;
	cout << "nhap n: " ,cin >>n ;
	cout << " Sum = ";
	for (int i = 0;i <= (n -1);i++){
		cout << i << " + ";
		sum += i ;
	}
	sum = sum + n ;
	cout << n <<  " = "<<sum;
}
