#include<iostream>
#include"Player.h"
#include"gameboard.h"

using namespace std;
void game() {
	gameboard user;
	cout << "////////////////LUDO//////////////////////\n";
	cout << "Two Player mode enabled\n";
	cout << "Color Blue: Player 1\n";
	cout << "Color Green: Player  2\n";
	do {
		for (playerturn = 0; playerturn < 2; playerturn++)
		{
			system("pause");
			user.play();
			user.dice_roll();
			user.move();


	 }
	} while (true);


}
void map() {
	for (int i = 0; i<6; i++) {
		for (int j = 0; j<6; j++) {
			cout << "   ";
		}
		cout << "  ";
		if (i == 0) {
			cout << "* * *\n";
		}
		else {
			cout << "* - *\n";
		}
	}
	for (int i = 0; i<12; i++) {
		cout << "*";
		if (i != 5) {
			cout << "   ";
		}
		if (i == 5) {
			cout << "<->";
		}
	}
	cout << endl;
	for (int i = 0; i<12; i++) {
		if (i == 0) {
			cout << "*";
		}
		else {
			if (i == 11) {
				cout << "*";
			}
			else {
				cout << "-";
			}
		}
		if (i != 5) {
			cout << "   ";
		}
		if (i == 5) {
			cout << "<->";
		}
	}
	cout << endl;
	for (int i = 0; i<12; i++) {
		cout << "*";
		if (i != 5) {
			cout << "   ";
		}
		if (i == 5) {
			cout << "<->";
		}
	}
	cout << endl;
	for (int i = 0; i<6; i++) {
		for (int j = 0; j<6; j++) {
			cout << "   ";
		}
		cout << "  ";
		if (i == 5) {
			cout << "* * *\n";
		}
		else {
			cout << "* - *\n";
		}
	}


}
int main()
{
	map();
	game();
}

