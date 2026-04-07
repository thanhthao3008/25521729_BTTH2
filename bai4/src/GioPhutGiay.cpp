#include "GioPhutGiay.h"
#include <bits/stdc++.h>
using namespace std;

void GioPhutGiay::Nhap()
{
    do
    {
        cout << "Nhap gio (>=0 va <24): ";
        cin >> iGio;
        cout << "Nhap phut (>=0 va <60): ";
        cin >> iPhut;
        cout << "Nhap giay (>=0 va <60): ";
        cin >> iGiay;
    }
    while (iGio < 0 || iGio >= 24 || iPhut < 0 || iPhut >= 60 || iGiay <0 || iGiay >= 60);
}
void GioPhutGiay::Xuat()
{
    if (iGio < 10) cout << 0;
    cout << iGio << ":";
    if (iPhut < 10) cout << 0;
    cout << iPhut << ":";
    if (iGiay < 10) cout << 0;
    cout << iGiay;
}
GioPhutGiay GioPhutGiay::TinhCongMotGiay()
{
    GioPhutGiay Next;
    if (iGiay == 59)
    {
        Next.iGiay = 0;
        if (iPhut == 59)
        {
            Next.iPhut = 0;
            if (iGio == 23)
            {
                Next.iGio = 0;
            }
            else Next.iGio = iGio + 1;;
        }
        else
        {
            Next.iPhut = iPhut + 1;
            Next.iGio = iGio;
        }
    }
    else
    {
        Next.iGiay = iGiay + 1;
        Next.iPhut = iPhut;
        Next.iGio = iGio;
    }
    return Next;
}
