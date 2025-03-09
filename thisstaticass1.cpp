#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Player {
	int Player_ID;
	char Player_name[20];
	int runs;
	int wickets_played;
	int innings_played;
public:
	Player();
	Player(int id, const char* name, int r, int wt, int inplayed);
	void display();
};

Player::Player() {
	Player_ID = 0;
	strcpy(Player_name, "name");
	runs = 0;
	wickets_played = 0;
	innings_played = 0;
}

Player::Player(int id, const char* name, int r, int wt, int inplayed) {
	Player_ID = id;
	strcpy(Player_name,name);
	runs = r;
	wickets_played = wt;
	innings_played = inplayed;
}

void Player::display() {
	cout << "PLayer info" << endl;
	cout << "Player Name" << Player_name << endl;
	cout << "Player ID" <<Player_ID<< endl;
	cout << "Runs" << runs << endl;
	cout << "Wickets Player" << wickets_played << endl;
	cout << "Innings Played" << innings_played << endl;
}
int main() {
	Player p1;
	p1.display();
	Player p2;
}