#include<iostream>
using namespace std;
int u  , n ;
int kiemtra(int A ){
	int i = 0;
	while ( A > 10  ){
		A/=10;
		i++;
	}
	u = i ;
	return u;
}

int  phantich(int A){
	int g, f=1, l = 2 ;
	for (int i = 2; i < A-1;i++){
		
		if ( A % i == 0  ){
			g = A/i;
			f++;
			for(int j = 2  ; j < g ; j++ ){
				if ( g % j == 0 ){
					if ( g = j   ){
						f--;
						break;
					}
					else{
						g = g/j;
						f++;
					}
					
				}
			}
		break ;
		}
	} n = f;
	return n;
}

int ketqua(int A){

	if( kiemtra(A) == phantich(A)){	
		
		return 1;
	}
	else if  (kiemtra(A) > phantich(A)) {
		
		return 2;
	}
	else {
		
		return 3;
	}
}
int main (){
	int A;
	cout<<"A = ";
	cin>>A;
	kiemtra(A);
	phantich(A);
	if ( ketqua(A) == 1 )	 cout<<"Equidigital";
	else if ( ketqua(A) == 2) cout<<"Frugal";
	else if ( ketqua(A) == 3) cout<<"Wasteful";
}
