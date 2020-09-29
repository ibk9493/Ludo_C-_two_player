#pragma once
#include<string>
#include<iostream>
using namespace std;
int static o=1;
int x, y;
class player {
public:
	int x, y;
	int playernumber;
	int piece[4];
	int counter_piece[4];
	std::string color;
	
	int game[4][12];

	player()
	{
		 playernumber = o;
		 if (playernumber == 0)
		 {
			 color = "Red";
		 }else if(playernumber == 1)
		 {
			 color = "Blue";
		 }else if (playernumber == 2)
		 {
			 color = "Green";
		 }else if (playernumber == 3)
		 {
			 color = "Yellow";
		 }
		piece[0] = 1;
		piece[1] = 2;
		piece[2] = 3;
		piece[3] = 4; 
		counter_piece[0] = -1;
		counter_piece[1] = -1;
		counter_piece[2] = -1;
		counter_piece[3] = -1;
	/*	x[0] = 0;
		y[0] = 0;
		x[1] = 1;
		y[1] = 0;
		x[2] = 2;
		y[2] = 0;
		x[3] = 3;
		y[3] = 0;
	*/	playernumber++;
	}
	void getter()
	{
		cout << color;
		cout << playernumber;
		cout << piece[2];
		cout << counter_piece[2];
		

	}
	void setter()
	{
	}

	
};
