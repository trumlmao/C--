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
        cout << "Nhap A[" << i << "]";
        cin >> A[i];
    }
    cout << "Mang ban dau" << endl;
    for(int i=1;i<=n;i++)
    {
        cout << A[i] << " ";
    }
    int S=0;
    for(int i=1;i<=n;i++) 
    {
        S=S+A[i];
    }
    cout << "\n";
    cout << "Trung binh cong cua mang: " << float(S)/float(n);
}