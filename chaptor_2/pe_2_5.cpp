#include<iostream>
using namespace std;


int main()
{
	float faren, celcius;
	float i;

	cout <<"Enter the Temperature in Farenheit:";
	cin >> faren;
       	i = 5.0/9.0;
	celcius = (faren-32) * i ;
	cout <<"Temperature in Celcius = " << celcius << endl;

}
