#include <bits/stdc++.h>
#include "GioPhutGiay.h"
using namespace std;

int main()
{
    GioPhutGiay Now, Next;
    Now.Nhap();
    Next = Now.TinhCongMotGiay();
    cout << "Thoi gian sau 1 giay la: ";
    Next.Xuat();
    return 0;
}
