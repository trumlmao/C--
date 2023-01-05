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
    cout << "\n";
    int xoa;
    cout << "Nhap vi tri can xoa: ";
    cin >> xoa;
    for(int i=xoa;i<=n-1;i++)
    {
        A[i] = A[i+1];
    }
    n--;
    cout << "Mang sau khi xoa" << endl;
    for(int i=1;i<=n;i++)
    {
        cout << A[i] << " ";
    }


    
}