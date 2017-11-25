//Use of New and delete operators

#include <iostream>
#include <curses.h> //Use <conio.h> when using in windows based systems
using namespace std;

int main()
{
	int *arr;
	int size;

	cout <<"Enter the sixe of Integer array: ";
	cin >> size;

	cout <<"Creating an array of size "<< size << "..." << endl;
	arr = new int[size];

	cout <<"\nDynamic allocation of memory for array arr is successful" << endl;

	delete arr;

	getch();
}
