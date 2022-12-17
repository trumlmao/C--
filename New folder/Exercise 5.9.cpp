#include <iostream>
#include <math.h>
using namespace std;
int demso(int i)
{
    int dem = 0;
    while (i > 0)
    {
        i /= 10;
        ++dem;
    }
    return dem;
}
bool Armstrong(int i)
{
    int thutu = demso(i);
    int tmp = i, sum = 0, conlai;
    while (tmp > 0)
    {
        conlai = tmp % 10; 
        tmp /= 10;       
        sum += pow(conlai, thutu);
    }
    if (sum == i)
        return true;
    return false;
}
 
int main()
{
    int n,m;
    cout << "\nNhap n = " , cin >> n;
    cout << "\nNhap m = " , cin >> m;
 	for(int i = n;i <= m  ;i++){
	 
    if (Armstrong(i) == true)
    {
        cout<< i << " ";
    }
    
}
}
 
