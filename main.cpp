#include<stdio.h>
#include<stdint.h>
#include<string>
using namespace std;
class dongVat{
    private:
        string ten;
        uint8_t tuoi;
        double trongluong;
        double chieucao;
    public:
        dongVat(string ten,uint8_t tuoi,double trongluong,double chieucao);
        void BMI();
        void soSanhTuoi(dongVat dongVatKhac);
        void soSanhTrongLuong(dongVat dongVatKhac);
};
dongVat::dongVat(string ten,uint8_t tuoi,double trongluong,double chieucao){
    this->ten = ten;
    this->tuoi = tuoi;
    this->trongluong = trongluong;
    this->chieucao = chieucao;
}
void dongVat::BMI(){
    double bmi = trongluong/(chieucao*2);
    printf("BMI cua %s la: %.2f\n",ten.c_str(),bmi);
}
void dongVat::soSanhTuoi(dongVat dongVatKhac){
    if(this->tuoi == dongVatKhac.tuoi) printf("Tuoi %s bang tuoi %s\n",(this->ten).c_str(),dongVatKhac.ten.c_str());
    else if(this->tuoi > dongVatKhac.tuoi)printf("Tuoi %s lon hon tuoi %s\n",(this->ten).c_str(),dongVatKhac.ten.c_str());
    else printf("Tuoi %s be hon tuoi %s\n",(this->ten).c_str(),dongVatKhac.ten.c_str());
}
void dongVat::soSanhTrongLuong(dongVat dongVatKhac){
    if(this->trongluong == dongVatKhac.trongluong) printf("Trong luong %s bang trong luong %s\n",(this->ten).c_str(),dongVatKhac.ten.c_str());
    else if(this->trongluong > dongVatKhac.trongluong)printf("Trong luong %s lon hon trong luong %s\n",(this->ten).c_str(),dongVatKhac.ten.c_str());
    else printf("Trong luong %s be hon trong luong %s\n",(this->ten).c_str(),dongVatKhac.ten.c_str());
}
int main()
{
    dongVat dog("Cho",3,4,2);
    dongVat tiger("Ho",2,30,1);
    dog.BMI();
    tiger.BMI();
    dog.soSanhTrongLuong(tiger);
    dog.soSanhTuoi(tiger);
    return 0;
}