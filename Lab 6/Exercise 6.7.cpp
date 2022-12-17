#include <iostream>

using namespace std;

int tinh(int nSmall, int nBig,int final){
	
	if( (nSmall*2) + (nBig*5) == final){
		return nSmall;
	}
	else
		return -1;
}



int main(){
	int nSmall,nBig,final;
	cin >> nSmall;
	cin >> nBig;
	cin >> final;
	int n = tinh(nSmall,nBig,final);
	cout << n;
}
