#include <iostream>

using namespace std;
int i = 0;



int sum(int a ){
    int sum = 0;
    while (a)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int max(int a , int b){
	int n,m;
	while (m){
		int tmp = (m-1)*n + (n - 1);
		if (sum(tmp)>sum(m) ||
			sum(tmp)==sum(m) &&
			tmp > m)
			m = tmp;
		m /=10;
		n *= 10;
	}	
	return m;
		
}
int main(){
	int n,m;
	cout << i;
	cout << "nhap n : " , cin >> n;
	cout << "nhap m lon hon n : "	, cin >> m;
	if (n > m)
		main();	
	cout << max(n,m)	;		//
}
