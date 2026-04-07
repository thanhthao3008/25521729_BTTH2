
    #include <iostream>
    #include "NgayThangNam.h"
    using namespace std;

    //Hàm kiểm tra năm nhuận
    bool namnhuan (int x)
    {
        //Nếu chia hết cho 100 thì phải chia hết cho 400 mới là năm nhuận
        if (x % 100 == 0)
            if (x % 400 == 0) return 1;
            else return 0;
        //Các trường hợp còn lại chia hết cho 4 thì là năm nhuận
        if (x % 4 == 0) return 1;
        return 0;
    }

    //Hàm kiểm tra ngày hợp lệ
    bool KiemTra(int d, int m, int y)
    {
        if (y <= 0) return 0; 
        //Tháng có 30 ngày
        if (m == 4 || m == 6 || m == 9 || m == 11)
            if (d > 30 || d < 1) return 0;
            else return 1;

        //Tháng có 31 ngày
        else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
            if (d > 31 || d < 1) return 0;
            else return 1;
        else if (m == 2) {
            //Tháng 2 năm nhuận
            if (namnhuan(y))
                if (d > 29 || d < 1) return 0;
                else return 1;
            //Tháng 2 năm không nhuận
            else {
                if (d > 28 || d < 1) return 0;
                else return 1;
            }
        }
        // Tháng không hợp lệ
        else return 0;
    }

    void NgayThangNam::Nhap()
    {
       do
       {
        cout << "Nhap ngay: ";
        cin >> iNgay;
        cout << "Nhap thang: ";
        cin >> iThang;
        cout << "Nhap nam (lon hon 0): "; // nam > 0
        cin >> iNam;
       }
       while (!KiemTra(iNgay, iThang, iNam));
    }

    void NgayThangNam::Xuat()
    {
        cout << iNgay << "/" << iThang << "/" << iNam;
    }

    //Hàm tìm ngày riếp theo
    NgayThangNam NgayThangNam::NgayThangNamTiepTheo()
    {
        NgayThangNam Next;
        // Tháng 30 ngày, đang là ngày cuối tháng
        if ((iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11) && iNgay == 30) {
            Next.iNgay = 1;
            Next.iThang = iThang + 1;
            Next.iNam = iNam;
        }
        //Tháng 31 ngày (trừ tháng 12), đang là ngày cuối tháng
        else if ((iThang == 1 || iThang == 3 || iThang == 5 || iThang == 7 
            || iThang == 8 || iThang == 10) && iNgay == 31) 
        {
            Next.iNgay = 1;
            Next.iThang = iThang + 1;
            Next.iNam = iNam;
        }
        //Tháng 2 năm nhuận, đang là ngày cuối tháng
        else if (iThang == 2 && namnhuan(iNam) && iNgay == 29) {
            Next.iNgay = 1;
            Next.iThang = iThang + 1;
            Next.iNam = iNam;
        }
        //Tháng 2 năm không nhuận, đang là ngày cuối tháng
        else if (iThang == 2 && (!namnhuan(iNam)) && iNgay == 28) {
            Next.iNgay = 1;
            Next.iThang = iThang + 1;
            Next.iNam = iNam;
        }

        //Ngày cuối tháng 12 (cuối năm)
        else if (iNgay == 31 && iThang == 12) {
            Next.iNgay = 1;
            Next.iThang = 1;
            Next.iNam = iNam + 1;
        }
        // Các trường hợp còn lại
        else {
            Next.iNgay = iNgay + 1;
            Next.iThang = iThang;
            Next.iNam = iNam;
        }
        return Next;
    }

