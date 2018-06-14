#ifndef MAYTINHXACHTAY_H
#define MAYTINHXACHTAY_H
#include "MayTinh.h">
using namespace std;
class MayTinhXachTay:public MayTinh{
	private:
		float CanNang;
	public:
		MayTinhXachTay():MayTinh(),CanNang(0){}
		MayTinhXachTay(Date _date,string _h,float _cannang):MayTinh(_date,_h),CanNang(_cannang){}
		//setter.
		void setCanNang(float _cannang){
			this->CanNang = _cannang;
		}
		//getter.
		float getCanNang()const{
			return this->CanNang;
		}
		int getNamSuDung(int b)const{
			cout<<b<<"-"<<this->_Date.getNam()<<"=";
			return b-this->_Date.getNam();
		}
};
#endif
