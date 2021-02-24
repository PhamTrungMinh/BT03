#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t[n];
    for(int i=0; i<n; i++) cin >> t[i];
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(t[i] > t[j]) swap(t[i], t[j]);
        }
    }
    int sum=0;
    for(int i=0; i<n-1; i++) sum += (t[i] * (n-1-i));
    cout << sum << endl;
}
