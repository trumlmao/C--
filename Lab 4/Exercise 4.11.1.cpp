#include <iostream>
#include <fstream>

using namespace std;

bool checkTriangle( int a, int b, int c) {
    if ( a <= 0 || b <=0 || c <= 0 || a >=  180 || b >=  180 || c >=  180) {
        return false;
    }
    return true;
}


void Exercise_4_11() {
    int a, b, c;
    cout << " Nhap goc thu nhat : ",cin >> a;
    cout << " Nhap goc thu hai : ",cin >> b;
    cout << " Nhap goc thu ba : ",cin >> c;
    
    fstream input;
    
    
    input.open("input.txt", ios_base::out);
    input << a << endl;
    input << b << endl;
    input << c << endl;
    input >> a >> b >> c;
    input.close();

    ofstream output;
    output.open("output.txt", ios_base::in);
    if ( !checkTriangle(a, b, c)) {
        output << "Not triangle" << endl;
        output.close();
        return;
    }
    
		
	if ((a == b )&&(a== c )){
		cout << "E";
		output << "E" << endl;
	}else if ((a == b)||(a == c)||(b == c )){
		cout << "I";
		output << "I" << endl;
	}else {
		cout << "S";
		output << "S" << endl;
	}
	output.close();
    
}

int main() {
   Exercise_4_11();
}
