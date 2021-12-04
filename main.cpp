#include <iostream>
#include <string>
using namespace std;

/// khai bao cau truc thong tin cua mot sinh vien
struct sinhvien
{
  string mssv;
  string HoTen;
  float diem;
  int namsinh;
};
typedef struct sinhvien sv;

/// nhap thong tin cua mot sinh vien
void Nhap_Thongtin_Sinhvien(sv &x)
{
  fflush(stdin);
  cout << "Nhap mssv: " << endl;
  getline(cin, x.mssv);
  cout << "Nhap ho ten: " << endl;
  getline(cin, x.HoTen);
  cout << "Nhap diem sinh vien: " << endl;
  cin >> x.diem;
  cout << "Nhap nam sinh sinh vien: " << endl;
  cin >> x.namsinh;
}
/// xuat thong tin cua mot sinh vien
void Xuat_Thongtin_Sinhvien(sv x)
{
  cout << "\nmassv: " << x.mssv;
  cout << "\nHo ten: " << x.mssv;
  cout << "\ndiem: " << x.mssv;
  cout << "\nnam sinh: " << x.mssv;
}
/// nhap danh sach sinh vien
void Nhap_Danhsach_Sinhvien(sv a[], int n)
{
  for(int i = 0; i<n ; i++)
  {
    cout << "\n\n\t\tNhap danh sach sinh vien" << i + 1;
    Nhap_Thongtin_Sinhvien(a[i]);
  }
}
/// xuat danh sach sinh vien
void Xuat_Danhsach_Sinhvien(sv a[], int n)
{
  for(int i = 0; i<n; i++)
  {
    cout << "\n\n\t\tXuat danh sach sinh vien" << i + 1;
    Xuat_Thongtin_Sinhvien(a[i]);
  }
}
int main()
{
  sv a[100];
  int n;
  cout << "Nhap so luong sinh vien: " << endl;
  cin >> n;
  cout << "Nhap danh sach sinh vien";
  Nhap_Danhsach_Sinhvien(a,n);
  cout << "xuat danh sach sinh vien";
  Xuat_Danhsach_Sinhvien(a,n);
}