#include<iostream>
using namespace std;

int main()
{
	int i, j, large;

	cout << "Enter the Number 1: ";
	cin >> i;
	
	cout << "Enter the Number 2: ";
	cin >> j;

	cout << "The larger value is: ";
	if (i > j)
	{
		cout << i<< endl;
	}
	else 
	{
		if (i < j) 
		{
			cout << j<< endl;
		}
		else
		{
			cout << i<<endl;
		}
	}
}

	
