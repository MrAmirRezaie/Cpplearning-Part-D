#include <iostream>
using namespace std;

//Part[D]

//Write a program that displays the ASCII code of the character.

int main()
{
	char x;

	cout << "Enter your character : ";
	cin >> x;

	short int y;
	y = x;

	cout << "The ASCII character code entered by you is equal to : " << y << endl;
	
	return 0;
}