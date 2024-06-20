// Nhap vao 3 so nguyen duong d/m/y
// 1. d/m/y co phai la 1 ngay hop le hay khong
// 2. Tim ngay ke sau cua ngay d/m/y.
// 3. Tim ngay ke truoc cua ngay d/m/y
// 4. Cho biet ngay do la ngay thu may trong nam
// thang 1: 31
// thang 2: 28/29 tinh nam nhuan lay y%400
// thang 3: 31
// thang 4: 30
// thang 5: 31
// thang 6: 30
// thang 7: 31
// thang 8: 31
// thang 9: 30
// thang 10: 31
// thang 11: 30
// thang 12: 31
#include<iostream>
using namespace std;
int main(){
	int d,m,y,d1,m1,y1,d2,m2,y2;
	cout<<"Nhap d/m/y: ";cin>>d>>m>>y;
	cout<<endl;
	// cau a
	if(y > 0 ){
		if(m > 0 && m <= 12){
			if(d>0){
			if((m== 1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && d <= 31) cout<<d<<"/"<<m<<"/"<<y<<" la 1 ngay trong nam"<<endl;
			else if((m==4 || m==6 || m==9 || m==11) && d <= 30) cout<<d<<"/"<<m<<"/"<<y<<" la 1 ngay trong nam"<<endl;
			else if( m==2){
				if(y%400 ==0 && d<=29) cout<<d<<"/"<<m<<"/"<<y<<" la 1 ngay trong nam"<<endl;
				else if(y%400 !=0 ){
				if(y % 4 ==0 && d<=29) cout<<d<<"/"<<m<<"/"<<y<<" la 1 ngay trong nam"<<endl;
				else if(y % 4 !=0 && d<=28) cout<<d<<"/"<<m<<"/"<<y<<" la 1 ngay trong nam"<<endl;
				else cout<<d<<"/"<<m<<"/"<<y<<" khong phai la 1 ngay trong nam"<<endl;
		     	}
			else cout<<d<<"/"<<m<<"/"<<y<<" khong phai la 1 ngay trong nam"<<endl;
			}
			else cout<<d<<"/"<<m<<"/"<<y<<" khong phai la 1 ngay trong nam"<<endl;
		}
		else cout<<d<<"/"<<m<<"/"<<y<<" khong phai la 1 ngay trong nam"<<endl;
		}
		else cout<<d<<"/"<<m<<"/"<<y<<" khong phai la 1 ngay trong nam"<<endl;
	}
	else cout<<d<<"/"<<m<<"/"<<y<<" khong phai la 1 ngay trong nam"<<endl;
	
	// cau b
	if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && d+1 == 32 ){ 
	d1=1;
	if(m+1==13){
		m1=1;
		y1=y+1;
	}
	else {
	m1=m+1;
	y1=y;
    }
    }
	else if((m==4 || m==6 || m==9 || m==11) && d+1 ==31 ){
	d1=1;
	m1=m1+1;
	y1=y;
	}
	else if(m==2){
		if(((y%400==0) || (y%400!=0 && y%4==0)) && d+1==30){
			d1==1;
			m1=m+1;
			y1=y;
		}
		else if(y%400!=0 && y%4 != 0 && d+1 == 29){
		    d1=1;
		    m1=m+1;
		   	y1=y;
		}
	}
	else{
	 d1=d+1; 
	 m1=m;
	 y1=y;
	}
	cout<<d1<<"/"<<m1<<"/"<<y1<<" la ngay ke tiep "<<endl;
	// cau c
	if((m==1 || m==2 || m==4 || m==6 || m==8 || m==9 || m==11) && d-1 == 0 ){
		d2=31;
		if( m-1==0){
			m2=12;
			y2=y-1;
		}
		else{
			m2=m-1;
			y2=y;
		}
	}
	else if((m==5 || m==7 || m== 10 || m==12) && d-1 == 0){
		d2=30;
		m2=m-1;
		y2=y;
	}
	else if(m==3){
		if(((y%400==0) || (y%400!=0 && y%4==0)) && d-1==0){
			d2=29;
			m2=m-1;
			y2=y;
		}
		else if(y%4!=0 && d-1==0){
			d2=28;
			m2=m-1;
			y2=y;
		}
	}
	else{
		d2=d-1;
		m2=m;
		y2=y;
	}
	cout<<d2<<"/"<<m2<<"/"<<y2<<" la ngay ke truoc "<<endl;
	// cau d
	int diy=d;
	for(int i=1;i<m;i++){
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i== 10) diy+=31;
		if(i==4 || i==6 || i==9 || i==11) diy+=30;
		if(i==2){
			if((y%400 ==0 ) || (y%400!=0 && y%4==0)) diy+=29;
			if(y%400!=0 && y%4!=0) diy+=28;
		}
	}
	cout<<"Ngay "<<d<<"/"<<m<<"/"<<y<<" la ngay thu "<<diy<<" trong nam "<<y<<endl;
	return 0;
}