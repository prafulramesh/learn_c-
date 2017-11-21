#include<iostream>
using namespace std;


int main()
{
	float faren, celcius;
	float i;

	cout <<"Enter the Temperature in Farenheit:";
	cin >> faren;
	//i = 0.555;
       	i = 5.0/9.0;
	cout << "value of i =" << i << endl;
	celcius = (faren-32) * i ;
	cout <<"Temperature in Celcius = " << celcius << endl;

}
