#include<iostream>
using namespace std;

int main()
{
	int i= 10, j=5;
	int modResult = 0;
	int divResult = 0;

	modResult = i%j;
	cout << "\n modResult" << modResult << endl;

	divResult = i/modResult;
	cout << divResult;
}

