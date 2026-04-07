#include<iostream>
#include "NgayThangNam.h"
using namespace std;

int main()
{
    NgayThangNam today, Next;
    cout << "Nhap ngay hom nay:" << endl;
    today.Nhap();
    Next = today.NgayThangNamTiepTheo();
    cout << endl << "Ngay mai la: ";
    Next.Xuat();
    return 0;
}

