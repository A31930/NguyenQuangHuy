#ifndef GIAOVIEN_H
#define GIAOVIEN_H
#include "NhanVien.h"
using namespace std;
class GiaoVien:public NhanVien{
	private:
		string Khoa;
		double HSLuong;
		int TienDay;
	public:
		GiaoVien():NhanVien(),Khoa(""),HSLuong(0),TienDay(0){}
		//GiaoVien(NhanVien nv,string _khoa,double _hsluong,int _tienday):NhanVien(nv),Khoa(_khoa),HSLuong(_hsluong),TienDay(_tienday){}
		GiaoVien(string _h,Date _ngaysinh,string _cmnd,string _khoa,double _hsluong,int _tienday):NhanVien(_h,_ngaysinh,_cmnd),Khoa(_khoa),HSLuong(_hsluong),TienDay(_tienday){}
		//setter.
		void setKhoa(string _h){
			this->Khoa = _h;
		}
		double setHSLuong(double _hsluong){
			this->HSLuong = _hsluong;
		}
		int setTienDay(int _tienday){
			this->TienDay = _tienday;
		}
		//getter.
		string getKhoa()const{
			return this->Khoa;
		}
		double getHSLuong()const{
			return this->HSLuong;
		}
		int getTienDay()const{
			return this->TienDay;
		}
		//methods.
		double TinhLuong()const{
			return this->HSLuong*1500000+this->TienDay;
		}
		friend istream &operator >>(istream &in,GiaoVien &gv){
			cout<<"Ten giao vien: ";	in>>gv.HoTen;
			in>>gv.NgaySinh;
			cout<<"CMND: ";	in>>gv.CMND;
			cout<<"Khoa: ";	in>>gv.Khoa;
			cout<<"He so luong: ";	in>>gv.HSLuong;
			cout<<"Tien day: ";	in>>gv.TienDay;
			return in;
		}
		~GiaoVien(){}
};
#endif
