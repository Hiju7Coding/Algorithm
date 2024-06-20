#include<iostream>
#include<cstdlib>
#include<time.h>
#include<string.h>
#include<windows.h>
#include<conio.h> 
using namespace std;
struct vehicle{
	string Reg_number;
	string type;
};
struct node{
	vehicle vehicledata;
	node *next;
};
struct Queue{
    node *front;
	node *rear;
};
node* getnode(vehicle vehicleA);
void ChargingStation_Status(int Queue_status);
void Import_vehicle(Queue &q,int &Queue_status);
void vehicle_info(vehicle &vehicleA);
void Enqueue(vehicle vehicleA,int &Queue_status);
void Import(Queue &q, node *p);
void Check_VehicleInformation(Queue &q, int &Queue_status);
void Print_Vehicle_Info(vehicle vehicleA);
void Dequeue(Queue &q);
Queue q;
int main(){
	int Queue_status=0;
	srand(time(NULL));
	cout<<"Press spacebar to stop!"<<endl;
	Import_vehicle(q,Queue_status);
	return 0;
}
node* getnode(vehicle vehicleA){ 
    node *p=new node;
    if(p==NULL) exit(0);
    p->vehicledata=vehicleA;
    p->next=NULL;
    return p;
}
void Import(Queue &q,node *p){  
    if(q.front==NULL){
    q.front=p; 
    q.rear=p;
    }
    else{
    q.rear->next= p;
    q.rear= p;
    }
}
void ChargingStation_Status(int Queue_status){
    if(Queue_status>=21){
	cout<<"\nThe queue is full, no more cars will be accepted "<<endl;
	exit(0);
    }
    else cout<<"\nThere are "<<Queue_status<<" vehicles in the queue ";
}
void vehicle_info(vehicle &vehicleA){
	string t=" ";
	char charset[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while(t==" ")
	t=charset[rand()%(sizeof(charset)-1)];
	vehicleA.Reg_number=to_string(rand()%89+11)+t+"-"+to_string(rand()%10)+to_string(rand()%10)+to_string(rand()%10)+"."+to_string(rand()%10)+to_string(rand()%10);
	int random_type=rand()%4+1;
    if(random_type== 1) vehicleA.type="truck";
	if(random_type== 2) vehicleA.type="container";
	if(random_type== 3) vehicleA.type="car";
	if(random_type== 4) vehicleA.type="bus"; 
}
void Enqueue(vehicle vehicleA,int &Queue_status){
	Queue_status++;
    vehicle_info(vehicleA);
    Import(q,getnode(vehicleA));
}
void Import_vehicle(Queue &q,int &Queue_status){ 
    vehicle vehicleA;
    cout<<"\n-----------------------------"<<endl;
    if(kbhit()){
	 	int c = getch();
		if(c ==32){
			cout<<"\nToll station stopped working ";
			return;
		}
	}
	int newvehicle=rand()%4;
	if(newvehicle == 0){
	cout<<"\nThere is no vehicle to the toll booth";
	if(Queue_status==0){
	cout<<"\nThere are "<<Queue_status<<" vehicles in the queue ";
	sleep(1);
	Import_vehicle(q,Queue_status);
    }
    else{
    sleep(1);
	Check_VehicleInformation(q,Queue_status);	
	}
    }
    else{
	cout<<"\nThere are "<<newvehicle<<" vehicles waiting in line for the toll booth ";
    for(int i=1;i<=newvehicle && Queue_status<21;i++) Enqueue(vehicleA,Queue_status);
    ChargingStation_Status(Queue_status);
    sleep(rand()%2+1);
    Check_VehicleInformation(q,Queue_status);
    }
}
void Print_Vehicle_Info(vehicle vehicleA){
	cout<<"\nReg number: ";cout<<vehicleA.Reg_number;
	cout<<"\nType: ";cout<<vehicleA.type;
}
void Dequeue(Queue &q){
	q.front=q.front->next;
}
void Check_VehicleInformation(Queue &q,int &Queue_status){
	cout<<"\n\nInformation about the vehicle that is about to pass the station ";
	Print_Vehicle_Info(q.front->vehicledata);
	Dequeue(q);
	sleep(1);
	Queue_status--;
	cout<<"\nThe car has passed the station, the number of cars left in the queue is "<<Queue_status;
	sleep(1);
	Import_vehicle(q,Queue_status);
}


