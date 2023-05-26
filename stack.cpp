#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
#define MAX_STACK 100

struct stack {
	int top ;
	string names [MAX_STACK];
	int ids[MAX_STACK];
};

void push(stack *s, int id  , string name ){
	if (s->top ==  MAX_STACK-1 )
		cout <<"overflow";
	else {
		(s->top)++;
		s->ids[s->top]=id ;
		s->names[s->top]=name; 
	}
}

void pop(stack *s){
	if (s->top ==  -1  ){
		cout <<"underflow";
		}
	else{	
	int id = s->ids[s->top];
	string name = s->names[s->top];
	(s->top) -- ; 
	cout << "id : " << id ;
	cout << "\n name :"<< name ;}
}

void print(stack *s){
	cout<<"\n~~~~~~~~~~~~~~~~~\n";
	for (int i =0; i<=s->top;i++){
		cout << "id :" <<s->ids[i]<<"\n";
		cout << "name :"<<s->names[i]<<"\n";
	}
	cout<<"\n~~~~~~~~~~~~~~~~~\n";
}


int main(){
	stack s ; 
	s.top = -1;
	int option ; 
	int id1;
	string name;
	
	while(1){
		system("cls");
		cout << "\n 1: push";
		cout << "\n 2: pop";
		cout << "\n 3: print";
		cout << "\n 4: exit ";
		cout << "\n Enter one option (1-4) : ";
		cin >> option;
		
		switch(option){
			case 1 :
				cout << "\n id : ";
				cin >> id1;
				cout << "\n name : ";
				cin >> name ;
				push(&s , id1 , name);
				break;
			
			case 2 :
				pop(&s);
				getch();
				break;
			case 3 :
				print(&s);
				getch();
				break;	
			case 4: 
				return 0;
			default :
				cout << "\n Error!!";
		}
	}
}
