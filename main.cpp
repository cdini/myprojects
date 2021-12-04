#include <iostream>
#include <string>
using namespace std;
void NhapMang(int a[], int &n)
{
  for(int i = 0; i < n; i++)
  {
    printf("\na[%d]: ",i);
    scanf("%d",&a[i]);
  }
}
void XuatMang(int a[], int n)
{
  for(int i = 0; i < n; i++)
  {
    printf("%d\t",a[i]);
      
  }
}
int main() 
{
  int a[100];
  int n;
  printf("Nhap so phan tu: ");
	scanf("%d", &n);
  printf("\nNhap mang : ");
  NhapMang(a, n);
  printf("\nXuat mang : ");
  XuatMang(a, n);
  return 0;
} 