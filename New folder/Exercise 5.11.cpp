#include <iostream>
#include <string.h>

using namespace std;

int main(){
	string num[9] = {"one","two","three","four","five","six","seven","eight","nine"};
	int n;	
	cout << " nhap so: ",cin >> n;
	int a;
    
    int rev = 0;   
    while(n > 0){
        a = n % 10;
        rev = (rev * 10 )+ a;    
        n = n / 10;
    }
    
	int tmp = rev,so=0;
	while (tmp > 0)
    {
        so = tmp % 10;    
		tmp = tmp/10;  
        cout << num[so-1]<<" ";     
    }
    
		
		
	
}

