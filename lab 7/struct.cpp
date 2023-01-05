#include <iostream>

using namespace std;

struct sv{
	char ht[30];
	int ns;
};
sv A[50];

int main(){
	int n;
	cout <<"n= ";cin >>n;
	for(int i =0; i <n;i++){
		cout <<"ht = ",cin >> A[i].ht;
		cout <<"ns = ",cin >>A[i].ns;
	}
	cout <<"DS  \n";
	for(int i = 0; i <n;i++){
		fflush(stdin);
		cout <<A[i].ht<<" \t";
		cout <<A[i].ns<<"\n";
	}
}
