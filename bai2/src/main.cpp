
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

        // Tính toán
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

        // So sánh
        int cmp = a.SoSanh(b);
        if (cmp == 1)
            cout << "\nA > B";
        else if (cmp == 0)
            cout << "\nA = B";
        else
            cout << "\nA < B";

        return 0;
    }

