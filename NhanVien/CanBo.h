#ifndef CANBO_H
#define CANBO_H
#include "NhanVien.h"
using namespace std;
class CanBo:public NhanVien{
	private:
		string PhongBan;
		double HSLuong;
		int TienPC;
	public:
		CanBo():NhanVien(),PhongBan(""),HSLuong(0),TienPC(0){}
		CanBo(NhanVien _nv,string _phongban,double _hsluong,int _phucap):NhanVien(_nv),PhongBan(_phongban),HSLuong(_hsluong),TienPC(_phucap){}
		CanBo(string _h,Date _ngaysinh,string _cmnd,string _phongban,double _hsluong,int _phucap):NhanVien(_h,_ngaysinh,_cmnd),PhongBan(_phongban),HSLuong(_hsluong),TienPC(_phucap){}
		//setter.
		void setPhongBan(string _h){
			this->PhongBan = _h;
		}
		void setHSLuong(double a){
			this->HSLuong = a;
		}
		void setTienPC(int a){
			this->TienPC = a;
		}
		//getter.
		string getPhongBan()const{
			return this->PhongBan;
		}
		double getHSLuong()const{
			return this->HSLuong;
		}
		int getTienPC()const{
			return this->TienPC;
		}
		//methods.
		double TinhLuong(){
			return this->HSLuong*1500000+this->TienPC;
		}
		friend istream &operator >>(istream &in,CanBo &cb){
			cout<<"Ten: ";	in>>cb.HoTen;
			in>>cb.NgaySinh;
			cout<<"CMND: ";	in>>cb.CMND;
			cout<<"Phong ban: ";	in>>cb.PhongBan;
			cout<<"He so luong: ";	in>>cb.HSLuong;
			cout<<"Tien phu cap: ";	in>>cb.TienPC;
			return in;
		}
		friend ostream &operator <<(ostream &out,const CanBo &cb){
			out<<"Ten: "<<cb.HoTen<<endl;
			out<<"Ngay sinh: "<<cb.NgaySinh<<endl;
			out<<"CMND: "<<cb.CMND<<endl;
			out<<"Phong ban: "<<cb.PhongBan<<endl;
			return out;
		}
		~CanBo(){}
};
#endif
