#include <iostream>
#include <math.h>
using namespace std;

int main (){
	float n;
	float sum;
	cout << "nhap n : ",cin >> n;
	for (int i = 1; i <= n;i++){
		sum += (1/ (pow (i,2))) ;
	}
	cout << sum ;
}  
