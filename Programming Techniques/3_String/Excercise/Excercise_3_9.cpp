#include<iostream>
#include<string.h>
using namespace std;

struct file{
	int id;
	char name[256];
};

struct node{
	file info;
	node *next;
};

struct linkedList{
	node *head;
	node *tail;
};

node *createNode(file info){
	node *newNode = new node;
	newNode->info = info;
	newNode->next = NULL;
	return newNode;
}

void createList(linkedList &l)
{
	l.head = NULL;
	l.tail = NULL;
}

void addTailNode(linkedList &l, node *newNode) {
	if (!l.tail) {
		l.head = newNode;
		l.tail = newNode;
		return;
	}
	l.tail->next = newNode;
	l.tail = newNode;
}

void Import(linkedList &l, int &n) {
	cout<<"Enter the number files: ";cin>>n;
	file student;
	for(int i =1;i<=n;i++){
		cout<<"<====file "<<i<<"====>"<<endl;
		cout<<"Enter id: ";cin>>student.id;fflush(stdin);
		cout<<"Enter name: ";gets(student.name);fflush(stdin);
		node* newNode = createNode(student);
		addTailNode(l, newNode);
	}
}

void sort(linkedList &l){
	node *current = l.head;
	node *tmp;
	while (current) {
		tmp = current->next;
		while (tmp) {
			if (strcmp(current->info.name, tmp->info.name) > 0)
			swap(current->info, tmp->info);
			tmp = tmp->next;
		}
		current = current->next;
	}
}

void Export(linkedList l) {
	node *current = l.head;
	int i= 1;
	while (current){
		cout<<"<====file "<<i++<<"====>"<<endl;
		cout<<"id: "<<current->info.id<<"\t\t"<<current->info.name<<endl;
		current= current->next;
	}
}

int main(){
	linkedList list;
	createList(list);
	int n;
	Import(list, n);
	sort(list);
	Export(list);
	return 0;
}

