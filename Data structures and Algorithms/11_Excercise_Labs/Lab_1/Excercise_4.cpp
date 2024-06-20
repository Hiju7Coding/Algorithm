#include<iostream>
#include<string.h>
#define maxn 100
using namespace std;
struct Student{
	int rollno;
	string name;
	int percentage;
};
void Import_Array(Student a[maxn],int &n){
	rewind(stdin);
	cout<<"\nEnter rollno , name and percentage of "<<n<<" students "<<endl;
	for(int i=1;i<=n;i++){
		cout<<"\nRollno "<<i;a[i].rollno=i;  // So thu tu
		cout<<"\nEnter name: ";cin>>a[i].name; // Nhap ten
		cout<<"\nEnter percentage: ";cin>>a[i].percentage; // Nhap %
	}
}
void Export_Array(Student a[maxn],int n){
	cout<<"  rollno     name     percentage  "<<endl;
	for(int i=1;i<=n;i++)
	cout<<"  "<<a[i].rollno<<"          "<<a[i].name<<"           "<<a[i].percentage<<"%"<<endl; // Xuat ra so thu tu,ten,%.
}
int main(){
	int n;
	Student stu[maxn];
	cout<<"Enter number of students: ";cin>>n;
    Import_Array(stu,n);
    cout<<"Studen record: "<<endl;
    cout<<endl;
    Export_Array(stu,n);
}