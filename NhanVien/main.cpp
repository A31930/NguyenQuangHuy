#include <iostream>
#include "GiaoVien.h"
#include "CanBo.h"
#include <fstream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap so can bo: ";	cin>>n;
	CanBo *NV[n];
	fstream cb("canbo.txt",ios::out);
	for(int i=0;i<n;++i){
		cout<<"Can bo thu "<<i+1<<endl;
		CanBo *a = new CanBo();
		cin>>*a;
		NV[i]=a;
		cb<<"Can bo thu "<<i+1<<":\n";
		cb<<*a<<endl;
		cb<<"=================================================\n";
	}
	cb.close();
	
	return 0;
}
