#include<iostream>
#include<math.h>
#include <fstream>

using namespace std;
int main (){
	float a,b,c;// khai bao ba canh
	cin>>a>>b>>c;
	
	fstream file;
	file.open("Excercise_4.11.txt",ios_base::out );
	if ( a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0 )
	{
		if((a==b)&&(b==c))
		   file<<"E";		   
		else if((a==b)||(a==c)||(b==c))
	    	file<<"I";
		else
			file<<"S";
	}
	else 
	file<<"not triangle";

	file.close();
return 0;
}
