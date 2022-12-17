#include <iostream>
#include <fstream>

using namespace std;

bool checkCondition(int a) {
    if (  a < -999999999 || a > 999999999) {
        return false;
    }
    return true;
}

void Exercise_4_10() {
    long long arr[3];

    // nhap
    fstream inputFile;
    inputFile.open("input.txt", ios_base::in);

    for ( int i = 0; i< 3; i++) {
        inputFile >> arr[i];
    }
    inputFile.close();

    // kiem tra thoa man yeu cau de bai
    ofstream output;
    output.open("output.txt", ios_base::out);
    for ( int i = 0; i< 3; i++) {
        if (!checkCondition(arr[i])) {
            output << "Not valid";
            output.close();
            return;
        }
    }

    // xap xep tang dan
    for ( int i = 0 ; i < 2; i++) {
        for (int j = i; j < 3; j++) {
            if ( arr[j] < arr[i]) {
                swap(arr[j], arr[i]);
            }
        }
    }

    // in ra man hinh
    for ( int i = 0 ; i < 3; i++) {
        output << arr[i] << " ";
    }
    output.close();
    
}

int main() {
   Exercise_4_10();
}
