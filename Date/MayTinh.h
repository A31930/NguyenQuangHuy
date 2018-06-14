#ifndef MAYTINH_H
#define MAYTINH_H
#include "Date.h"
#include <string.h>
using namespace std;
class MayTinh{
	protected:
		Date _Date;
		string HangSX;
	public:
		MayTinh():_Date(0,0,0),HangSX(""){}
		MayTinh(Date _date,string _h):_Date(_date),HangSX(_h){}
		MayTinh(int a,int b,int c,string h):_Date(a,b,c),HangSX(h){}
		//setter.
		void setHangSX(string h){
			this->HangSX = h;
		}
		//getter.
		string getHangSX()const{
			return this->HangSX;
		}
		int getNamSX()const{
			return this->_Date.getNam();
		}
};
#endif
