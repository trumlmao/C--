#include <iostream>
#include<fstream>

using namespace std;

int main(){
	fstream file;
	file.open("bài 5.5",ios_base::out); 
	for(int i = 48;i <=127;i++){
		cout << (char)i << " ";
		file<<(char)i;
	}
	file.close();
	return 0;
}
