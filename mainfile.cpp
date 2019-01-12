#include"emp.h"
#include<iostream>
#include<string>
using namespace std;


int main()
{
	employee* e1= new employee();
	string name;
	int id_number;

	while(true)
	{	
		cout<<"Enter anything to enter data or press q to exit"<<endl;
		cin>>name;
	
		if (name=="q")
		{
			break;
		}
		
		else 
		{
			cout<<"Press 1. To add data"<<endl;
			cout<<"Press 2. To read the data"<<endl;
			cout<<"Press 3. To Insert data"<<endl;
			cout<<"Press 4. To delete data"<<endl;
			cout<<"Press 5. To see the data"<<endl;
			cin>>id_number;

			switch(id_number)
			{
				case 1:
					e1->menu();
					break;
				case 2:
					e1->show_rec();
					break;
	
				case 3:
					e1->insert();
					break;

				case 4:	
					e1->deletenode();
					break;
				
				case 5:
					e1->printnode();
					break;
				
				default:
					cout<<"Make a correct choice"<<endl;

			}

		}
	}
	cout<<"Exited from the program"<<endl;

}			
			






