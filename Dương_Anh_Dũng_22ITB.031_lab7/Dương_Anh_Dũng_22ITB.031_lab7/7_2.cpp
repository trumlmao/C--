#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap N= ";
    cin >> n;
    int A[n];
    int max=A[1];
    for(int i=1;i<=n;i++)
    {
        cout << "Nhap A[" << i << "]";
        cin >> A[i];
    }
    for(int i=1;i<=n;i++) {
        if(A[i]>max) {
            max=A[i];
        }
    } 
    cout << max;
}