
#include <iostream>
using namespace std;

int main()
{
	float num1, num2,
	      sum, average;

	cout << "Enter the Number 1 :";
	cin  >> num1 ;
//	cout << endl;
	cout << "Enter the Number 2 :";
	cin  >> num2 ;
//	cout << endl;


	sum = num1 + num2;
	average = sum/2;

	cout << "Sum of Numbers :" << sum << endl;
	cout << "Average of Numbers :" << average << endl;

}

