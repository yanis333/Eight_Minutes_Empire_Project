// Eight-Minute-Empire.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

#include<iostream>

#include "Bidding.h"
#include "Player.h"

using namespace std;



/*
int main()
{
	Player a;
	Player b;
	Player c;
	Player d;

	bool start = false;
	int x;
	int players;
	int younger = 100;
	int mostBidding[4] = { 0,0,0,0 };    // takes the bidding for every player
	int winner;						// current winner
	int current = 0;						// current biggest bid

	Deck* deck = new Deck();



	cout << "Let's start the game !" << endl;

	while (start == false) {

		cout << "How many players are playing (2 to 4)? " << endl;
		cin >> x;
		players = x;

		switch (x) {

		case 2:
			cout << "How old is the first player? " << endl;
			cin >> x;

			a = Player(x, deck, 14);

			cout << "How old is the second player? " << endl;
			cin >> x;

			b = Player(x, deck, 14);
			start = true;
			break;
		case 3:
			cout << "How old is the first player? " << endl;
			cin >> x;

			a = Player(x, deck, 11);

			cout << "How old is the second player? " << endl;
			cin >> x;

			b = Player(x, deck, 11);

			cout << "How old is the third player? " << endl;
			cin >> x;

			c = Player(x, deck, 11);
			start = true;
			break;
		case 4:
			cout << "How old is the first player? " << endl;
			cin >> x;

			a = Player(x, deck, 9);

			cout << "How old is the second player? " << endl;
			cin >> x;

			b = Player(x, deck, 9);

			cout << "How old is the third player? " << endl;
			cin >> x;

			c = Player(x, deck, 9);

			cout << "How old is the fourth player? " << endl;
			cin >> x;

			d = Player(x, deck, 9);
			start = true;
			break;

		default:
			cout << "Please choose between 2 and 4" << endl;
			break;
		}
	}


	Player player[] = { a,b,c,d };    // so now , we have a player array with the players that are playing 


	for (int i = 0; i < players; i++) {
		cout << "For Player " << (i + 1) << endl;
		player[i].bidding.runOnce();


		mostBidding[i] = player[i].bidding.getBidding();    // we get every bidding from the Bidding object and we add it to the array
	}


	// here , we compare the bidding and the age, 
	// we keep in the variable younger , the youngest player , and in the current variable, we keep the current highest bidding
	for (int i = 0; i < players; i++) {

		if (i == 0) {
			current = mostBidding[i];
		}

		for (int j = i; j < players - 1; j++) {

			if (mostBidding[i] > mostBidding[j + 1]) {


				if (mostBidding[i] > current) {
					current = mostBidding[i];
					winner = i;
				}

			}
			else if (mostBidding[i] == mostBidding[j + 1]) {

				if (player[i].bidding.getAge() < player[j + 1].bidding.getAge()) {

					if (current != 0) {

						if (mostBidding[i] >= current) {
							current = mostBidding[i];
							winner = i;
							younger = player[i].bidding.getAge();
						}
					}
					else if (player[i].bidding.getAge() < younger) {

						winner = i;
						younger = player[i].bidding.getAge();

					}

				}
				else {
					if (current != 0) {
						if (mostBidding[j + 1] >= current) {
							current = mostBidding[i];
							winner = j + 1;
							younger = player[j + 1].bidding.getAge();
						}
					}
					else if (player[j + 1].bidding.getAge() < younger) {

						winner = j + 1;
						younger = player[j + 1].bidding.getAge();

					}
				}


			}
			else {
				if (mostBidding[j + 1] > current) {
					current = mostBidding[j + 1];
					winner = j + 1;
				}

			}

		}
	}



	// we print results at the same time and the winner 

	cout << "Results of the Bidding" << endl;
	if (current != 0) {

		for (int i = 0; i < players; i++) {
			cout << " Player " << (i + 1) << " bid for " << mostBidding[i] << endl;
		}

	};

	cout << "therefore , the player  " << (winner + 1) << " has won the bidding " << endl;







	return 0;
}*/




