#pragma once
#include"Player.h"
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<ctime>
int a=0;
using namespace std;
static int count_status = -1;
int dice[3];
int playerturn;
int l = 0;






class gameboard
{
public:
	
	player p[4];
	
	void play()
	{
		cout << "YOUR TURN PLAYER " << playerturn + 1 << endl;
	}
	void dice_roll() {
		srand(time(NULL));
		count_status = -1;

		do {
			count_status++;
			dice[count_status] = rand() % 6 + 1;
			cout << "You rolled a  " << dice[count_status] << endl;
		} while (dice[count_status] > 5 && count_status<2);
		if (count_status == 2)
		{
			dice[0] = 0;
			dice[1] = 0;
			dice[2] = 0;
			count_status = -1;

			}
		
		
	}
	void move()
	{
		int g = 0;
		do {
			if (dice[g] > 5)
			{
				if (p[playerturn].counter_piece[0] == -1)
				{
					p[playerturn].counter_piece[0] = 0;
					l++;
					g++;
				}else if(p[playerturn].counter_piece[1] == -1)
				{
					p[playerturn].counter_piece[1] = 0;
					l++;
					g++;
				}else if (p[playerturn].counter_piece[2] == -1)
				{
					p[playerturn].counter_piece[2] = 0;
					l++;
					g++;
				}else if (p[playerturn].counter_piece[3] == -1)
				{
					p[playerturn].counter_piece[3] = 0;
					l++;
					g++;
				}
			}
		} while (dice[g] > 5);

		for (a = 0; a < 4; a++)
		{
			if (p[playerturn].counter_piece[a] == -1)
			{
				cout << "Out of play token NO : ";
				cout << p[playerturn].piece[a] << endl;

			}
			else
			{
				cout << "/////In play token///// :";
				cout << p[playerturn].piece[a] << "\nLoction  : ";
				cout << p[playerturn].game[x][y]<< endl;
			}
			
		}

		if (p[playerturn].counter_piece[0] > -1 || p[playerturn].counter_piece[1] > -1 || p[playerturn].counter_piece[2] > -1 || p[playerturn].counter_piece[3] > -1)
		{
			do {

				cout << "Enter the Piece number you want to move";
				cin >> a;
				a = a - 1;
			} while (p[playerturn].counter_piece[a] == -1);


			p[playerturn].game[x][y]= 0;
		    int i;
			int d = 0;
			for (i = 0; i < 4; i++)
			{
				cout << p[playerturn].piece[i] << endl;
			}
			int stat = 0;
			do {
				if (stat > 0)
				{
					g++;
				}
				p[playerturn].y = p[playerturn].y + dice[g];
				if (p[playerturn].y < 12)
				{
					p[playerturn].y = 12 - p[playerturn].y;
					p[playerturn].x++;
				}

				p[playerturn].game[x][y]= p[playerturn].piece[a];
			//	cout << p[playerturn].game[x][y] << endl;
				cout << p[playerturn].piece[a] << "Loction  : ";
				cout << (p[playerturn].game[p[playerturn].x][p[playerturn].x]) << endl;
				stat++;
			} while (dice[g] == 6);
		}
		///////////////2nd//////////
		/*if (playerturn == 2)
		{
			p[playerturn].game[x][y]= 0;
			int i;
			int d = 0;
			for (i = 0; i < 4; i++)
			{
				cout << p[playerturn].piece[i] << endl;
			}
			int stat = 0;
			do {
				if (stat > 0)
				{
					g++;
				}
				p[playerturn].y[a] = p[playerturn].y[a] + dice[g];
				if (p[playerturn].y[a] < 12)
				{
					p[playerturn].y[a] = 12 - p[playerturn].y[a];
					p[playerturn].x[a]++;
				}


				p[playerturn].game[x][y];= p[i].piece[a];
				cout << p[playerturn].game[x][y]<< endl;
				cout << p[playerturn].piece[a] << "loction  : ";
				cout << (p[playerturn].x[a] + 1)*(1 + p[playerturn].y[a]) << endl;
				stat++;
				if (p[playerturn].x[a] < 4 && p[playerturn].y[a] < 12)
				{
					p[playerturn].x[a] = 0;
					p[playerturn].y[a] = 0;

				}
			} while (dice[g] == 6);
		}*/
	}
	void kill()
	{
		//game[p[playerturn].x[a]][p[playerturn].y[a]];

	}

	

};
