#include<iostream>
#include <bitset>
using namespace std;

int main()
{
	int i , j;

	cout << "Enter the number: ";
	cin >> i;

	std::bitset<12> x(i);
	std::bitset<8> y(i);
	cout << "Number in 2's Complement form 12 bit: " << x << endl;
	cout << "Number in 2's Complement form 8 bit: " << y << endl;
}
