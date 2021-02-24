#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    int count =0, a[x][y], number=1, row=x-1, col=y-1;
    while(true)
    {
        for(int j=count; j<=col; j++) a[count][j]=number++;
        if(number>x*y) break;
        for(int i=count+1; i<=row; i++) a[i][col]=number++;
        if(number>x*y) break;
        for(int j=col-1; j>=count; j--) a[row][j]=number++;
        if(number>x*y) break;
        for(int i=row-1; i>count; i--) a[i][count]=number++;
        if(number>x*y) break;
        count++;
        row--; col--;
    }
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout << setw(2) << setfill(' ') << a[i][j] << " ";
        }
        cout << endl;
    }
}
