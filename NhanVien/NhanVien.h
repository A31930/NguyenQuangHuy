#ifndef NHANVIEN_H
#define NHANVIEN_H
#include "Date.h"
#include <iostream>
#include <string.h>
using namespace std;
class NhanVien{
	protected:
		string HoTen;
		Date NgaySinh;
		string CMND;
	public:
		NhanVien():HoTen(""),NgaySinh(),CMND(""){}
		NhanVien(string _h,Date _ngaysinh,string _cmnd):HoTen(_h),NgaySinh(_ngaysinh),CMND(_cmnd){}
		NhanVien(string _h,int _a,int _b,int _c,string _cmnd):HoTen(_h),NgaySinh(_a,_b,_c),CMND(_cmnd){}
		//setter.
		void setHoTen(string _h){
			this->HoTen = _h;
		}
		void setNgaySinh(Date _ngaysinh){
			this->NgaySinh = _ngaysinh;
		}
		void setCMND(string _h){
			this->CMND = _h;
		}
		//getter.
		string getHoTen()const{
			return this->HoTen;
		}
		Date getNgaySinh()const{
			return this->NgaySinh;
		}
		string getCMND()const{
			return this->CMND;
		}
		//methods.
		double TinhLuong(){
		}
		~NhanVien(){}
};
#endif
