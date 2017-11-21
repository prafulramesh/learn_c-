#include<iostream>
using namespace std;


class temp
{
	float faren, celcius, i;
	
	public:
		void conv_temp(void);
		void display(void);
};

void temp :: conv_temp(void)
{
	cout <<"Enter the temperature in Farenheit: " ;
	cin >> faren;
	i = 5.0/9.0;
	celcius = (faren - 32) * i;
}

void temp :: display(void)
{
	cout <<"Temperature in Celcius: "<< celcius << endl;
}

int main()
{
	temp p;
	p.conv_temp();
	p.display();

	return 0;
}	
