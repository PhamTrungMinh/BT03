#include <iostream>
using namespace std;
int main()
{
    int n, ma=-999, mi=999, sum=0, count=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(mi>a[i]) mi=a[i];
        if(ma<a[i]) ma=a[i];
        if(a[i]%2) count++;
        else sum+=a[i];
    }
    cout << "Phan tu nho nhat: " << mi << endl;
    cout << "Phan tu lon nhat: " << ma << endl;
    cout << "Tong cac phan tu chan: " << sum << endl;
    cout << "So cac phan tu le: " << count << endl;
}
