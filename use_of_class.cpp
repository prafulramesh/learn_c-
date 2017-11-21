#include<iostream>
using namespace std;

class person
{
	char name[30];
	int age;

	public:
		void get_data(void);
		void display(void);
};

void person :: get_data(void)
{
	cout <<"Enter Name: ";
	cin >> name;
	cout <<"Enter age: ";
	cin >> age;
}

void person :: display(void)
{
	cout << "\nName:" << name;
	cout << "\nAge:" << age <<endl;
}


int main()
{
	person p;

	p.get_data();
	p.display();

	return 0;
}

