#include<iostream>
using namespace std;

int main()
{
	float output;
	int j,i;
	float x; 
	float o1, o2, o3, o4;
	int y1, y2, y3, y4;
	
	i = 0x790;

	if (i > 0x7F0)
	{
		i = 0xfffff000 | i;
		cout << std::hex << i << endl;
		i = ~i;
		i = i+1;
		j = 1;
	}
	else
	{
		i = i;	
	}
	
	x = i * 0.0625;
	
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

	output = x + o1 + o2 + o3 + o4;
	
	if(j)
		output = output * (-1);
	else
		output = output;

	cout << "Floating point value: "<< output << endl;
}
