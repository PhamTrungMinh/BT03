#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double a[n], tb=0, psai=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        tb+=a[i];
    }
    tb/=n;
    for(int i=0; i<n; i++){
        psai += pow((a[i]-tb),2);
    }
    cout << fixed << setprecision(2) << tb << " " << sqrt(psai);
}
