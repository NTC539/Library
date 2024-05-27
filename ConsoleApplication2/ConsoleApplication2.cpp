
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

bool isTrue = 1;
string Name[100];
string Author[100];
int Year[100];
string ISBN[100];
int action;
int bcount;

void see1book(int num) {
		cout << "Book #" << num+1 << endl;
		cout << "Name - " << Name[num] << endl;
		cout << "Author - " << Author[num] << endl;
		cout << "Year - " << Year[num] << endl;
		cout << "ISBN - " << ISBN[num] << endl;
}
int booksCount(){
	int n = 0;
	for (size_t i = 0; i < 100; i++)
		{
		if (Year[i] != 0) {
			n++;
			}
		}
	return n;
}
void add() {
	cout << "Book #" << bcount+1 << endl;
	cout << "Name - ";
	getline(cin, Name[bcount]);
	cout << "Author - ";
	getline(cin, Author[bcount]);
	cout << "Year - ";
	cin >> Year[bcount];
	cout << "ISBN - ";
	getline(cin, ISBN[bcount]);
	see1book(bcount);
}

int main()
{
	for (size_t i = 0; i < 100; i++)
	{
		Name[i] = "a";
		Author[i] = "b";
		Year[i] = 0;
		ISBN[i] = "c";

	}
	bcount = booksCount();
    while (isTrue){
		cout << "1 - add book" << endl << "2 - delete book" << endl << "3 - find book" << endl << "4 - see all books" << endl << "5 - exit" << endl;
		cout << "Change action >> ";
		cin >> action;
		switch (action)
		{
		case 1:
			add();
		default:
			continue;
		}
    }
}
