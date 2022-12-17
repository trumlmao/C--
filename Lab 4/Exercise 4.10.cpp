#include <iostream>
#include <fstream>
using namespace std;
int main(){
	double a , b,c ;
	double n[3];
	cout << "nhap so a : " ,cin >>a;
	cout <<"nhap so b : " ,cin >>b;
	cout <<"nhap so c : " ,cin >>c;
	fstream file ;
	file.open("Exercise4.10.txt", ios_base::out);
	
    file << a << endl;
    file << b << endl;
    file << c<< endl;
    
    
    file.close();
	file.open("Exercise4.10.txt"),ios::in;
	double temp;
	double min,max;
	for(int i = 0; i < 3; i++){
	
		file >> n[i];
	}
	min = n[0] < n[1] ? n[0] : n[2];
    max = n[0] + n[1] - min;

    min = min < n[2] ? min : n[2];
    max = max > n[2] ? max : n[2];

 	cout << min << " "<< n[0] + n[1] + n[2] - min - max<<" " << max ;
    file << min << " "<< n[0] + n[1] + n[2] - min - max<<" " << max ;    
    }
    
    /*for(int i = 0; i < 2; i++){			thuat toan sap xep 3 so 
        for(int j = i + 1; j < 3; j++){
            if(n[i] < n[j]){
                // Hoan vi 2 so n[i] va n[j]
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;        
            }
        }
    }*/
