#ifndef EMP_H_
#define EMP_H_
#include<string>
using namespace std;

struct node{
	int id, salary, age;
	string name;
	node* next;
	
};

class employee{
private:
	node* head;
	char ch;
	void printnodeworker(node*);
	
public:
	employee()
	{
		head=NULL;
	}
	
	void menu();
	void show_rec();
	void insert();
	void deletenode();
	void printnode();
	
};

#endif
