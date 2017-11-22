#include<iostream>
using namespace std;

enum shape
{
	circle,
	triangle,
	square
};

int main()
{
	int code;
	int radius;
	int area;

	cout <<"Enter the code between 0 and 2 : ";
	cin >> code;

	while(1)
	{
		switch(code)
		{
			case circle:
				cout <<"Enter the Radius in cm :";
				cin >> radius;
				
