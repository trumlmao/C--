#include <iostream>

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


bool palindrome(int n)
{
    int thutu = demso(n);
    int tmp = n, conlai, nhanto = 0;
    while (tmp > 0)
    {
        conlai = tmp % 10;    
		tmp = tmp/10;  
        nhanto = (nhanto*10) + conlai;       
    }
    
    if (nhanto == n)
        return true;
    return false;
}


int main(){
	int n;
	
    cout << "\nNhap n = " , cin >> n;
	 
    if (palindrome(n) == true)
    {
        cout<< n << " la so palindrome" ;
    }else {
    	cout << " sai  " << n;
	}
    
    
}
	
	

