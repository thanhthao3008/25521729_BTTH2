

    #include <bits/stdc++.h>
    #include "SoPhuc.h"
    using namespace std;

    // Hàm nhập số phức
    void SoPhuc::Nhap()
    {
        cout << "Nhap phan thuc: ";
        cin >> iThuc;
        cout << "Nhap phan ao: ";
        cin >> iAo;
    }
    //Hàm xuất số phức, nếu bằng 0 thì không cần in ra
    //Phần ảo bằng 1 không cần in ra
    void SoPhuc::Xuat()
    {
        if (iThuc != 0 && iAo == 0) cout << iThuc << endl;
        else if (iAo != 0 && iThuc == 0)
        {
            if (iAo == 1) cout << "i" << endl;
            else if (iAo == -1) cout << "-i" << endl;
            else cout << iAo << "i" << endl;
        }
        else if (iAo == 0 && iThuc == 0) cout << 0 << endl;
        else if (iThuc != 0 && iAo > 0)
        {
            if (iAo == 1) cout << iThuc << " + i" << endl;
            else cout << iThuc << " + " << iAo << "i" << endl;
        }
        else if (iThuc != 0 && iAo < 0)
        {
            if (iAo == -1) cout << iThuc << " - i" << endl;
            else cout << iThuc << " - " << -iAo << "i" << endl;
        }
    }

    SoPhuc SoPhuc::Cong(SoPhuc a)
    {
        SoPhuc kq;
        kq.iThuc = iThuc + a.iThuc;
        kq.iAo = iAo + a.iAo;
        return kq;
    }

    SoPhuc SoPhuc::Tru(SoPhuc a)
    {
        SoPhuc kq;
        kq.iThuc = iThuc - a.iThuc;
        kq.iAo = iAo - a.iAo;
        return kq;
    }

    SoPhuc SoPhuc::Nhan(SoPhuc a)
    {
        SoPhuc kq;
        kq.iThuc = iThuc * a.iThuc - iAo * a.iAo;
        kq.iAo = iThuc * a.iAo + iAo * a.iThuc;
        return kq;
    }

    SoPhuc SoPhuc::Chia(SoPhuc a)
    {
        SoPhuc kq;
        double x = a.iThuc * a.iThuc + a.iAo * a.iAo;
        if (x == 0)
        {
            cout << "Khong the chia duoc!";
            exit(1);
        }
        kq.iThuc = (iThuc * a.iThuc + iAo * a.iAo) / x;
        kq.iAo = (iAo * a.iThuc - iThuc * a.iAo) / x;
        return kq;
    }
