#include <iostream>
#include "Date.h">
#include "MayTinh.h"
#include "MayTinhDeBan.h"
#include "MayTinhXachTay.h"
using namespace std;
int main(){
	Date d1(18,6,2014), d2(1,1,2014);
	cout<<d1<<";"<<d2<<endl;
	MayTinh m1(d1,"Dell"),m2(d2,"HP"); cout<<m1.getNamSX()<<endl;
	MayTinhDeBan mb1(d1,"Dell",true);
	MayTinhXachTay mt1(d2,"Sony",2.2);	cout<<mb1.getNamSX()<<endl;
	cout<<mt1.getNamSX()<<endl;
	cout<<mt1.getNamSuDung(2017);
	return 0;
}
