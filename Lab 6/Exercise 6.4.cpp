#include <iostream>

using namespace std;


int sum(int a){
	int tmp= 0;
	while(a != 0){
		tmp = tmp + a%10;
		a /= 10;
	}
	return tmp;	
}


void maxsum(int n , int m){
	if (m > n && n > 0)
	{ 
		int a = 0;
		int b = n;
		for(int i = m ; i >= n ; i--)
		{
			if ( a < sum(i)){
				a = sum(i);
				b = i;
			}
			
		}
		cout<<" "<<b;
	}
	
	
	
}




int main(){
	int m,n;
	cout << "nhap khoang tu n den m: \n";
	cout <<"nhap n : ",cin >> n;
	cout <<"nhap m : ",cin >>m;
	maxsum(n,m);
	
}
