#ifndef DATE_H
#define DATE_H
using namespace std;
class Date{
	protected:
		int Ngay,Thang,Nam;
	public:
		Date():Ngay(0),Thang(0),Nam(0){}
		Date(int a,int b,int c):Ngay(a),Thang(b),Nam(c){}
		//setter.
		void setNgay(int a){
			this->Ngay = a;
		}
		void setThang(int b){
			this->Thang = b;
		}
		void setNam(int c){
			this->Nam = c;
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
		//methods.
		friend ostream &operator << (ostream &out,const Date &b){
			out<<b.Ngay<<"/"<<b.Thang<<"/"<<b.Nam;
			return out;
		}
		friend istream &operator >> (istream &in,Date &b){
			cout<<"Ngay sinh: ";	in>>b.Ngay;
			cout<<"Thang sinh: ";	in>>b.Thang;
			cout<<"Nam sinh: ";	in>>b.Nam;
			return in;
		}
		~Date(){}
};
#endif
