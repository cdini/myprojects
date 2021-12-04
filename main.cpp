#include <iostream>
#include <string>
using namespace std;

class ConNguoi
{
  public:
    string GioiTinh;
    int tuoi;
    float Chieu_cao;
    bool con_zin;
};

int main()
{
  ConNguoi nguoi;
  nguoi.GioiTinh = "Nam";
  nguoi.tuoi = 20;
  nguoi.Chieu_cao = 1.7;
  nguoi.con_zin = true;
  cout << nguoi.GioiTinh << endl;
}