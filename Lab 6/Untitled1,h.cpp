#include<stdio.h>
#include<math.h>
bool KiemTraChinhPhuong(int n){
	if(n<1)
		return false;
	int i = sqrt(n);
	if(i*i==n)
		return true;
	return false;
}
void LietKeChinhPhuong(int n){
	int a= sqrt(n);
	if(KiemTraChinhPhuong(n)==true)
		for(int i=1; i<a; i++)
			printf("%d", i*i);
	else 
		for(int i=1; i<=a; i++)
				printf("%d", i*i);
			
}
int main(){
	int n;
	do{
		printf("nhap n: ");
		scanf("%d", &n);
		
	}while(n<=0);
	LietKeChinhPhuong(n);
}
