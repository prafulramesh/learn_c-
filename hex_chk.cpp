#include<iostream>
using namespace std;

int main()
{
	float output;
	int i;
	float x; 
	float o1, o2, o3, o4;
	int y1, y2, y3, y4;

	i = 0xc95;
	
	x = i * 0.0625;
	
	cout << "Value of x = " << x << endl;

	y1 = i & 0x0001;
	y2 = i & 0x0002;
	y3 = i & 0x0004;
	y4 = i & 0x0008;

	y2 = y2 >> 1;
	y3 = y3 >> 2;
	y4 = y4 >> 3;

	o1 = y1 * 0.0625;
	o2 = y2 * 0.125;
	o3 = y3 * 0.25;
	o4 = y4 * 0.5;
	cout << "o1: " << o1 <<"\n"<<"o2: " << o2 << "\n" <<"o3: " <<  o3 << "\n" <<"o4: "<<  o4 << endl;

	output = x + o1 + o2 + o3 + o4;
	
	cout << "Floating point value: "<< output << endl;
}
