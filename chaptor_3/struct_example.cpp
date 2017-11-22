#include<iostream>
using namespace std;

struct book
{
	char title;
	char author;
	int prize;
	int pages;
};

int main()
{

	
	book book1, book2, book3;

	book1.title = 'L';// For storing a string it require to define through string operations.
	book1.author = 'B';
	book1.prize = 200;
	book1.pages = 300;

	cout << "Book1 title: " << book1.title <<endl;
	cout << "Book1 author: " << book1.author <<endl;
	cout << "Book1 prize: " << book1.prize <<endl;
	cout << "Book1 pages: " << book1.pages <<endl;
}

