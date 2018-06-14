#ifndef MAYTINHDEBAN_H
#define MAYTINHDEBAN_H
#include "MayTinh.h"
using namespace std;
class MayTinhDeBan:public MayTinh{
	protected:
		bool LoaiCase;
	public:
		MayTinhDeBan():MayTinh(), LoaiCase(true){}
		MayTinhDeBan(Date _date,string h,bool _loaicase):MayTinh(_date,h),LoaiCase(_loaicase){}
		//setter.
		void setLoaiCase(bool _loaicase){
			this->LoaiCase = _loaicase;
		}
		//getter.
		bool getLoaiCase()const{
			return this->LoaiCase;
		}
};
#endif
