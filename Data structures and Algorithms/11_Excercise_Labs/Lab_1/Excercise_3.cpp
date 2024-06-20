#include<iostream>
#include<string.h>
#define maxn 100
using namespace std;
struct Student{
	int rollno;
	string name;
	int percentage;
};
int main(){
	int n;
	Student stu[maxn];
	cout<<"Enter number of students: ";cin>>n;
    rewind(stdin);
	cout<<"\nEnter rollno , name and percentage of "<<n<<" students "<<endl;
	for(int i=1;i<=n;i++){
		cout<<"\nRollno "<<i;stu[i].rollno=i;
		cout<<"\nEnter name: ";cin>>stu[i].name;
		cout<<"\nEnter percentage: ";cin>>stu[i].percentage;
	}
    cout<<"Studen record: "<<endl;
    cout<<endl;
    cout<<"  rollno     name     percentage  "<<endl;
	for(int i=1;i<=n;i++)
	cout<<"  "<<stu[i].rollno<<"          "<<stu[i].name<<"           "<<stu[i].percentage<<"%"<<endl;
	
}
    