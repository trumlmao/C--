#include <iostream>
#include <fstream>

using namespace std;

void Exercise_4_12() {
	char c,d ; 
	cout << "nhap char : ",cin >> c;
    fstream input;
    input.open("input.txt", ios_base::in);
    
    input >> c;
    input.close();
   
    fstream output;
    
    output.open("output.txt", ios_base::out);
   
    if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        output << "A" << endl;
        cout << output << endl;
    }
    else if ( c >= '0' && c <= '9') {
        output << "D" << endl;
        cout << output << endl;
    }
    else {
        output << "S" << endl;
        cout << output << endl;
    }
    
    
    output.close();
    return;
}

int main() {
   Exercise_4_12();
}
