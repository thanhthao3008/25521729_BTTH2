
    #include <bits/stdc++.h>
    #include "SoPhuc.h"
    using namespace std;
    int main()
    {
        SoPhuc a, b;
        cout << "Nhap so phuc thu nhat: " << endl;
        a.Nhap();
        cout << "Nhap so phuc thu hai: " << endl;
        b.Nhap();
        // Cộng 2 Số Phức
        SoPhuc Tong = a.Cong(b);
        cout << "Tong hai so phuc la: ";
        Tong.Xuat();
        cout << "\n";
        // Trừ 2 Số Phức
        SoPhuc Hieu = a.Tru(b);
        cout << "Hieu hai so phuc la: ";
        Hieu.Xuat();
        cout << "\n";
        // Nhan 2 Số Phức
        SoPhuc Tich = a.Nhan(b);
        cout << "Tich hai so phuc la: ";
        Tich.Xuat();
        cout << "\n";
        // Chia 2 Số Phức
        SoPhuc Thuong = a.Chia(b);
        cout << "Thuong hai so phuc la: ";
        Thuong.Xuat();
        return 0;
    }

