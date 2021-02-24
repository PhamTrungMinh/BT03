#include <iostream>
using namespace std;

bool doi_guong(const int n)
{
    int x=n, m=0;
    while(x>0)
    {
        m = m*10 + x%10;
        x/=10;
    }
    if(m==n) return true;
    else return false;
}

int main()
{
    int t, a, b;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int dem=0;
        cin >> a >> b;
        for(int x=a; x<=b; x++)
        {
            if(doi_guong(x)) dem++;
        }
        cout << dem << endl;
    }
}
