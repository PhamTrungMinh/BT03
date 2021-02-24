#include <iostream>
using namespace std;

struct sinh_vien{
    double toan, ly, anh;
    sinh_vien(){};
    sinh_vien(double _toan, double _ly, double _anh){
        toan = _toan;
        ly = _ly;
        anh = _anh;
    }
    void nhap(){
        cin >> toan >> ly >> anh;
    }
    void in(){
        cout << toan << " " << ly << " " << anh << endl;
    }
    double trung_binh(){
        return (toan+ly+anh)/3;
    }
};

int main()
{
    sinh_vien s[3];
    for(int i=0; i<3; i++) s[i].nhap();
    for(int i=0; i<2; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(s[i].toan < s[j].toan) swap(s[i],s[j]);
        }
    }
    cout << "Sap xep theo diem toan: " << endl;
    for(int i=0; i<3; i++) s[i].in();
    for(int i=0; i<2; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(s[i].anh < s[j].anh) swap(s[i],s[j]);
        }
    }
    cout << "Sap xep theo diem anh: " << endl;
    for(int i=0; i<3; i++) s[i].in();
    for(int i=0; i<2; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(s[i].trung_binh() < s[j].trung_binh()) swap(s[i],s[j]);
        }
    }
    cout << "Sap xep theo diem trung binh: " << endl;
    for(int i=0; i<3; i++) s[i].in();
}
