#include<iostream>
#include<math.h>
using namespace std;//dang 3 *3 +4*4 =5*5
int main (){
    int n;
    cout<<" n = ";
	cin>>n; 
	cout<<"cac bo 3 pi ta go\n";
    if(n > 0)
    {
    	for (int a = 1 ; a <= n ; a++)
        	for(int b = a ; b <=n ; b++)
        	{
			if(sqrt(pow(a,2)+pow(b,2))>n)
				break;
			else if(sqrt(pow(a,2)+pow(b,2))<=n && sqrt(a*a + b*b) == (int) sqrt(a*a + b*b))
				cout<<a<<"\t"<<b<<"\t"<<sqrt(a*a+b*b)<<"\n\n";
			}
    }
	else 
		return 1;
}
