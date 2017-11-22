#include<iostream>
using namespace std;

struct person
{
	char name[50];
	int age;
	int salary;
};

int main()
{
	person p;

	cout <<"Enter the name of a person: ";
	cin.get(p.name, 50);
	cout <<"Enter the age: ";
	cin >> p.age;
	cout <<"Enter the salary: ";
	cin >> p.salary;

	cout << "\n \n" << endl;
	cout << "Displaying the Entered details" <<endl;
	cout << "Name: " << p.name << endl;
	cout << "Age: " << p.age << endl;
	cout << "Salary: " << p.salary << endl;
}



		
