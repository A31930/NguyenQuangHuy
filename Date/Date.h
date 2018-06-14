#ifndef DATE_H
#define DATE_H
using namespace std;
class Date{
	protected:
		int Ngay,Thang,Nam;
	public:
		Date():Ngay(0),Thang(0),Nam(0){}
		Date(int _ngay,int _thang,int _nam):Ngay(_ngay), Thang(_thang),Nam(_nam){}
		//setter.
		void setDate(int _ngay,int _thang,int _nam){
			this->Ngay = _ngay;
			this->Thang = _thang;
			this->Nam = _nam;
		}
		//getter.
		int getNgay()const{
			return this->Ngay;
		}
		int getThang()const{
			return this->Thang;
		}
		int getNam()const{
			return this->Nam;
		}
		friend ostream &operator <<(ostream &out,const Date &b){
			out<<b.Ngay<<"/"<<b.Thang<<"/"<<b.Nam;
			return out;
		}
};
#endif
