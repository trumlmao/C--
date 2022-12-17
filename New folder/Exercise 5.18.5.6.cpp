#include <iostream>
#include <fstream>
using namespace std;

int main(){
	fstream file;
	file.open("bài 5.6",ios_base::out); 
	int n;
	cout << "nhap n: ",cin >> n;
	for (;n > 0;n--){
		cout << n << " ";
		file << n<<"\t";
	}
	file.close();
	return 0;
}
