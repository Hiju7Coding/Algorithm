#include<iostream>
using namespace std;
struct student_info{
    char student_code[11];
    char student_name[50];
    int basic_subject_score;
    int advance_subject_score1;
    int advance_subject_score2;
};
void Import_student_information(student_info *&student,int &n){
	student=new student_info[n+1];
	for(int i=1;i<=n;i++){
		cout<<"Import info student "<<i<<endl;
		rewind(stdin);
		cout<<"Enter student code: ";gets((student+i)->student_code);
		cout<<"Enter student name: ";gets((student+i)->student_name);
		cout<<"Enter basic subject score: ";cin>>(student+i)->basic_subject_score;
		cout<<"Enter advancec subject score 1: ";cin>>(student+i)->advance_subject_score1;
		cout<<"Enter advancec subject score 2: ";cin>>(student+i)->advance_subject_score2;
	}
}
void Export_student_information(student_info *student,int &n){
	for(int i=1;i<=n;i++){
		cout<<"\nInfo student "<<i<<endl;
		cout<<"student code: "<<(student+i)->student_code;
		cout<<"\nstudent name: "<<(student+i)->student_name;
		cout<<"\nbasic subject score: "<<(student+i)->basic_subject_score;
		cout<<"\nadvance subject score 1: "<<(student+i)->advance_subject_score1;
		cout<<"\nadvance subject score 2: "<<(student+i)->advance_subject_score2;
		int Total=(student+i)->basic_subject_score + (student+i)->advance_subject_score1 + (student+i)->advance_subject_score2;
	    cout<<"\nTotal score: "<<Total<<endl;
	}
}
void Find_info_score_smallerthanfive(student_info *student,int &n){
	cout<<"\nInfo student score smaller than five: "<<endl;
	for(int i=1;i<=n;i++){
		if((student+i)->basic_subject_score < 5 || (student+i)->advance_subject_score1 < 5 || (student+i)->advance_subject_score2 <5 ){
		cout<<"\nInfo student "<<i<<endl;
		cout<<"student code: "<<(student+i)->student_code;
		cout<<"\nstudent name: "<<(student+i)->student_name;
		cout<<"\nbasic subject score: "<<(student+i)->basic_subject_score;
		cout<<"\nadvance subject score 1: "<<(student+i)->advance_subject_score1;
		cout<<"\nadvance subject score 2: "<<(student+i)->advance_subject_score2;
		}
	}
}
void Find_info_scoremax(student_info *student,int &n){
	int max=0,k;
	for(int i=1;i<=n;i++){
		int Total=(student+i)->basic_subject_score + (student+i)->advance_subject_score1 + (student+i)->advance_subject_score2;
		if(Total > max){
			max=Total;
			k=i;
	}
    }
	cout<<"\nInfo student score max "<<endl;
	cout<<"\nstudent code: "<<(student+k)->student_code;
	cout<<"\nstudent name: "<<(student+k)->student_name;
	cout<<"\nbasic subject score: "<<(student+k)->basic_subject_score;
	cout<<"\nadvance subject score 1: "<<(student+k)->advance_subject_score1;
	cout<<"\nadvance subject score 2: "<<(student+k)->advance_subject_score2;
}
void Insertion_sort(int *a,int n){
	int pos, x;
	for(int i = 2; i <= n; i++){ 
	x = *(a+i); 
	pos = i;
	while(pos > 0 && x < a[pos-1]){
		*(a+pos) = *(a+pos-1);	
		pos--;
	}
	*(a+pos) = x;
	}
}
void Exchange_info(student_info *student,int &n){
	int *score;
	score=new int[n+1];
	for(int i=1;i<=n;i++){
	*(score+i) = (student+i)->advance_subject_score1 + (student+i)->advance_subject_score2;
	}
	Insertion_sort(score,n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		if( (student+j)->advance_subject_score1 + (student+j)->advance_subject_score2 == *(score+i)){
		cout<<"\nInfo student "<<i<<endl;
		cout<<"student code: "<<(student+j)->student_code;
		cout<<"\nstudent name: "<<(student+j)->student_name;
		cout<<"\nbasic subject score: "<<(student+j)->basic_subject_score;
		cout<<"\nadvance subject score 1: "<<(student+j)->advance_subject_score1;
		cout<<"\nadvance subject score 2: "<<(student+j)->advance_subject_score2;
		}
	}
	}
}
int main(){
	int n;
	student_info *student;
	cout<<"Enter n: "; cin>>n;
	Import_student_information(student,n);
	cout<<"\n----------------------------"<<endl;
	Export_student_information(student,n);
	cout<<"\n----------------------------"<<endl;
	Find_info_score_smallerthanfive(student,n);
	cout<<"\n----------------------------"<<endl;
	Find_info_scoremax(student,n);
	cout<<"\n----------------------------"<<endl;
	Exchange_info(student,n);
}
