#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct node {
	int id;
	string name;
	node *next;
};
void print(node *start){
	node *p=start;
	cout<<"\n~~~~~~~~~~~~~~~~~";
	while(p){
		cout<<"\n"<<p->id<<":"<<p->	name;
		p=p->next;
	}
	cout<<"\n~~~~~~~~~~~~~~~~~";
}

void count (node *start , int *counter){
	node *p=start ;
	do {
		*counter +=1;
		p= p->next;
	}
	while (p);
	cout << *counter ;
}

void insertFirst(node **start, int id1, string name1){
	node *p=new node();
	p->id=id1;
	p->name=name1;
	p->next=*start;
	*start=p;
}


void del(node **start , int id1){
	node *p , *q;
	if((*start)->id == id1){
		p = *start;
		*start = (*start)-> next;
		delete(p);
		return;
	}
	p = *start ; p = q -> next;
	while(q && q -> id != id1){
		p = q;
		p = q -> next;
	}
	if(q){
		p -> next = q -> next;
		delete(q);
	}
}


int main(){
	node *start = NULL;
	int option;
	int id1;
	string name1;
	int counter = 0 ; 
	
	while(1){
		system("cls");
		cout << "\n 1: Insert";
		cout << "\n 2: Print";
		cout << "\n 3: Delete";
		cout << "\n 4: count ";
		cout << "\n 5: Exit";
		cout << "\n Enter one optin (1-5) : ";
		cin >> option;
		
		switch(option){
			case 1 :
				cout << "\n id : ";
				cin >> id1;
				cout << "\n name : ";
				cin >> name1;
				insertFirst(&start , id1 , name1);
				break;
			case 2 :
				print(start);
				getch();
				break;
			case 3 :
				int id1;
				cout << "\n id : ";
				cin >> id1;
				del(&start , id1);
				break;
			case 4: 
				count(start,&counter);
				getch();
				break;
			case 5 :
				return 0;
			default :
				cout << "\n Error!!";
		}
	}
}
