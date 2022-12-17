 #include <iostream>
#include <conio.h>
using namespace std;



int tinh(int num){
    for (int i = num ; i >= 1; i--){
        if (num % i == 0 && i % 2 != 0){
            return i;
        }
    }
}

int main(){
    int num;
    cout << "num = ";
    cin >> num;

    int result = tinh(num);
    if (result % 2 == 0 ){
    	cout << "num";
	}else
    cout << "Uoc so le Lon nhat = " << result << endl;
} 
