#ifndef SOPHUC_H
#define SOPHUC_H

class SoPhuc
{
    private:
        double iThuc;
        double iAo;
    public:
        void Nhap();
        void Xuat();
        SoPhuc Cong(SoPhuc a);
        SoPhuc Tru(SoPhuc a);
        SoPhuc Nhan(SoPhuc a);
        SoPhuc Chia(SoPhuc a);
};

#endif

