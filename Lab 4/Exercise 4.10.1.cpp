#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

int main(){
	
    int num1 , num2, num3;
    
    int n[3];
    
    
    cout << " nhap so a: " ,cin >> num1 ;
    cout <<"nhap so b: ",cin >> num2;
    cout <<"nhap so c: ",cin >> num3;
    
    fstream file;
	
    
    
    file.open ("test.txt"),ios::out;
    file << num1 << endl ;
    file << num2 << endl;
    file << num3;
    file.close();
    file.open ("test.txt"),ios::in;
    file >> num1 ;
    file >> num2;
    file >> num3;
    cout << num1 << endl;
    cout << num2 << endl << num3;
    
    
    
    
    for(int i = 1 ; i < 3 ;i++){
    	file >> n[i];
    	
  	
	}
	for(int i = 1 ; i < 3 ;i++){
    	cout << n[i] << " ";
    	
    	
	}
	
    file.close();
 }
  
