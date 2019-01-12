#include"emp.h"
#include<iostream>
#include<string>
using namespace std;


void employee:: menu()
{
	node* newer= new node;

	cout<<"Enter the details of an employee"<<endl;
	cout<<"Enter id"<<endl;
	cin>>newer->id;
	
	cout<<"Enter name"<<endl;
	cin>>newer->name;
	
	cout<<"Enter age"<<endl;
	cin>>newer->age;

	cout<<"Enter salary"<<endl;
	cin>>newer->salary;
	
	if(head==NULL)
	{
		head=newer;
	}
	
	else
	{
		newer->next=head;
		head=newer;
	}


};

void employee:: show_rec()
{
	node* tp= new node;
	tp=head;
	
	cout<<"-------Details will be displayed in reversed order-----"<<endl; 
	
	while(tp!=0)
	{
		cout<<"ID : "<<tp->id<<endl;
		cout<<"Name : "<<tp->name<<endl;
		cout<<"Age : "<<tp->age<<endl;
		cout<<"Salary : "<<tp->salary<<endl;
		tp=tp->next;
	
	}


};

void employee:: insert()
{
	node* newnode =new node();
	node* tp=0;
	node* curr=head;

	cout<<"Enter the details of an employee"<<endl;
	cout<<"Enter id"<<endl;
	cin>>newnode->id;
	
	cout<<"Enter name"<<endl;
	cin>>newnode->name;
	
	cout<<"Enter age"<<endl;
	cin>>newnode->age;

	cout<<"Enter salary"<<endl;
	cin>>newnode->salary;

	while(curr!=0)
	{
		if(newnode->id>=curr->id)
			break;
	
		else
			tp=curr;
			curr=curr->next;
	}

	if(curr==head)
	{
		head=newnode;
	}
	else
	{
		tp->next=newnode;
		newnode->next=curr;

	}
	

};
	
void employee:: deletenode()
{
	node* del= new node();
	int id_number;
	node* curr=head;
	node* tp=NULL;

	cout<<"Enter the id to be deleted"<<endl;
	cin>>id_number;

	while(curr!=0)
	{
		if(curr->id==id_number)
			break;
		else
		{
			tp=curr;
			curr=curr->next;		
		}
	}
		
	if(curr==0)
	{
		cout<<"Id not in the list"<<endl;
	}
	
	else
	{	
		tp->next=curr->next;
		delete curr;

	}

};


void employee::printnode()
{
	cout<<"-----Employee Details are as follows-----"<<endl;
	printnodeworker(head);

};			
	
void employee:: printnodeworker(node* curr)
{
	

	if(curr!=0)
	{
		printnodeworker(curr->next);
		cout<<"ID : "<<curr->id<<endl;
		cout<<"Name : "<<curr->name<<endl;
		cout<<"Age : "<<curr->age<<endl;
		cout<<"Salary : "<<curr->salary<<endl;
	}
};	
	
	

