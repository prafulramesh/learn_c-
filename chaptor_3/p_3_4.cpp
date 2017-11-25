// Use of endl and setw
// use of fixed and setprecision

#include<iostream>
#include<iomanip> // for setw

using namespace std;

int main()
{
	int a = 950, b= 95, c= 1098;
	float x = 10.5, y =12.002, z;

	cout << "Without setw..." << endl;
	cout << "a = " << a << endl
	     << "b = " << b << endl
	     << "c = " << c << endl
	     << "\n" << endl;

	cout << "With setw..." << endl;
	cout << "a = " << setw(5) << a << endl
	     << "b = " << setw(5) << b << endl
	     << "c = " << setw(5) << c << endl << "\n";

	z = x * y;

	cout << "Without fixed and set precision..." << endl;
	cout << "z = " << z << endl << "\n";

	cout << "With fixed and set precision..." << endl;
	cout << fixed << setprecision(5) << "z = " << z << endl;

}



