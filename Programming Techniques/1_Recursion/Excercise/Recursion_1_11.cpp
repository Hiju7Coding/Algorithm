#include<iostream>
using namespace std;
void move(int disk, char start, char finish, char spare);
int count=0;
int main(){
    int disk;
    cout<<"Input number of disk: ";cin>>disk;
    move(disk, 'A', 'C', 'B');
    cout<<"\nTotal number of mives: "<<count<<endl;
}
void move(int disk, char start, char finish, char spare){
    if(disk == 1){
    cout<<"\nMove disk from "<<start<< " to "<< finish;
    count++;
    return;
    }
    else{
    move(disk-1, start, spare, finish);
    move(1, start, finish, spare);
    move(disk-1, spare, finish, start);
    }
}
