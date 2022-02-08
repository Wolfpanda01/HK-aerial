// HK-Aerial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int coordinates[8][8];
	int ex; //enemy x coodrinates
	int ey; //enemy y coodrinates
	int sx = 0; // seach x
	int sy = 0; // shearch y
	cout << "Welcome HK Aerial." << endl;
	cout << "Selecting enemy location..."<<endl;
	ex = rand() % 8 + 1; //radom x
	ey = rand() % 8 + 1; //radon y
	cout << "Enemy selected " << endl;
	cout << "scaning x" << endl;
	while (sx != ex) {
		cout << "scaning for " << sx << endl;
		sx++; //add 1 to x

	}
	cout << "x coordinates found" << endl;
	cout << "scaning y" << endl;
	while (sy != ey) {
		cout << "scaning for " << sy << endl;
		sy++; //add 1 to y

	}
	cout << "y coordinates found" << endl;
	cout << "Enemy found!" << endl;
	cout << "(" << ex << ", " << ey << ")" << endl; // print out what theselected is 
	
	return 1;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
