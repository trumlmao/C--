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
    int max=A[1];
    for(int i=1;i<=n;i++) {
        if(A[i]>max) {
            max=A[i];
        }
    }
    int min=A[1];
    for(int i=1;i<=n;i++) {
        if(A[i]<min) {
            min=A[i];
        }
    }
    float tbc = (float(max)+float(min))/2;
    cout << "\n";
    cout << "Max= " << max << endl;
    cout << "Min= " << min << endl;
    cout << "Trung binh cong max and min= " << tbc ;

}