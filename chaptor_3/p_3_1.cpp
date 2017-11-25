// Scope of Resolution operator:

#include<iostream>
using namespace std;

int m = 10;	//Global m

int main()
{
	int m = 20;
	{
		int k= m;
		int m = 30;

		cout << "Inner blocks:" <<endl;
		cout << "k =" << k << endl;
		cout << "m =" << m << endl;
		cout << "::m = " << ::m << "\t" << "// :: always refers to global varible " << endl;
	}
	
	cout << "\n";
	cout << "Outer blocks:" << endl;
	cout << "m = " << m << endl;
	cout << "::m = " << ::m << endl;
}

