#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap N= ";
    cin >> n;
    int A[n];
    for(int i=1;i<=n;i++)
    {
        cout << "Nhap A[" << i << "]=";
        cin >> A[i];
    }
    cout << "Mang ban dau" << endl;
    for(int i=1;i<=n;i++)
    {
        cout << A[i] << " ";
    }
    int S=0;
    int dem=0;
    cout << "\n";
    cout << "So chan la: " << endl;
    for(int i=1;i<=n;i++) {
        if(A[i]%2==0) {
            S=S+A[i];
            cout << A[i] << " ";
            dem++;
        }
    }
    cout << "\n";
    cout << "TB cong so chan la: " << S/dem << endl;
    int S1=0;
    int dem1=0;
    cout << "\n";
    cout << "So chan la: " << endl;
    for(int i=1;i<=n;i++) {
        if(A[i]%2!=0) {
            S1=S1+A[i];
            cout << A[i] << " ";
            dem1++;
        }
    }
    cout << "\n";
    cout << "TB cong so le la: " << S1/dem1 << endl;
}