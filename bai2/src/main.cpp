
    #include <iostream>
    #include "PhanSo.h"
    using namespace std;

    int main() {
        PhanSo a, b;

        cout << "Nhap phan so A:\n";
        a.Nhap();

        cout << "Nhap phan so B:\n";
        b.Nhap();

        cout << "\nPhan so A: ";
        a.RutGon();
        a.Xuat();

        cout << "\nPhan so B: ";
        b.RutGon();
        b.Xuat();
        // So s�nh
        int cmp = a.SoSanh(b);
        cout << "\nSo sanh: ";
        if (cmp == 1)
            cout << "A > B\n";
        else if (cmp == 0)
            cout << "A = B\n";
        else
            cout << "A < B\n";

        // T�nh to�n
        PhanSo tong = a.Tong(b);
        cout << "\nTong: ";
        tong.Xuat();

        PhanSo hieu = a.Hieu(b);
        cout << "\nHieu: ";
        hieu.Xuat();

        PhanSo tich = a.Tich(b);
        cout << "\nTich: ";
        tich.Xuat();

        PhanSo thuong = a.Thuong(b);
        cout << "\nThuong: ";
        thuong.Xuat();

        return 0;
    }

