//Ho Ten: Chau Que Nhon
//MSSV: 6151071079
#include <iostream>
#include <math.h>
using namespace std;
class DonThuc{
	private:
  		float bac;
  		float heso;
	public:
		void nhap();
		void xuat();
		void giatri(float x);
		void sosanh(DonThuc p);
		DonThuc tong(DonThuc p);
		DonThuc hieu(DonThuc p);
		DonThuc tich(DonThuc p);
		DonThuc thuong(DonThuc p);
		void daoham();
		void nguyenham();
		int getHeso();
		int getBac();
};
int DonThuc::getHeso(){
	return heso;
	}
int DonThuc::getBac(){
	return bac;
	}
void DonThuc::nhap(){
	cout<<"Nhap he so: ";
	cin>>heso;
	cout<<"Nhap bac don thuc: ";
	cin>>bac;
	}
void DonThuc::xuat(){
	if(bac==0)
		cout<<"Don Thuc da nhap: "<<heso<<endl;
	else if(bac==1)
		cout<<"Don thuc da nhap: "<<heso<<"x"<<endl;
	else 
		cout<<"Don thuc da nhap: "<<heso<<"x^"<<bac<<endl;
	}
void DonThuc::giatri(float x){
	int d;
	cout<<"Nhap gia tri x: ";
	cin>>x;
	d=heso*(pow(x,bac));
	cout<<"Gia tri don thuc tai x="<<x<<" la: "<< d<<endl;
	}
void DonThuc::sosanh(DonThuc p){
	if(bac>p.bac)
		cout<<"D1 lon hon D2";
	else if(bac<p.bac)
		cout<<"D1 be hon D2";
	else {
		if(heso>p.heso)
			cout<<"D1 lon hon D2";
		else if(heso<p.heso)
			cout<<"D1 be hon D2";
		else
			cout<<"D1 bang D2";
		}
	}
DonThuc DonThuc::tong(DonThuc p){
	DonThuc t;
	if(bac==p.bac){
	t.heso=heso+p.heso;
	return t;
	}
	}
DonThuc DonThuc::hieu(DonThuc p){
	DonThuc t;
	if(bac==p.bac){
	t.heso=heso-p.heso;
	return t;
	}
}
DonThuc DonThuc::tich(DonThuc p){
	DonThuc t;
	t.heso=heso*p.heso;
	t.bac=bac+p.bac;
	return t;
	}
DonThuc DonThuc::thuong(DonThuc p){
	DonThuc t;
	t.heso=heso/p.heso;
	t.bac=bac-p.bac;
	return t;
	}
void DonThuc::daoham(){
	DonThuc t;
	t.heso=heso*bac;
	t.bac=bac-1;
	cout<<"Dao ham: "<<t.heso<<"x^"<<t.bac<<endl;
	}
void DonThuc::nguyenham(){
	cout<<"Nguyen ham: "<<heso<<"((x^"<<bac+1<<")/"<<bac+1<<")"<<endl;
	}
int main(){
	float x;
	DonThuc d1, d2;
	d1.nhap();
	d1.xuat();
	cout<<"He so: "<<d1.getHeso()<<endl;
	cout<<"Bac: "<<d1.getBac()<<endl;
	d1.giatri(x);
	d1.daoham();
	d1.nguyenham();
	d2.nhap();
	d2.xuat();
	d1.sosanh(d2);
	(d1.tong(d2)).xuat();
	
}	
