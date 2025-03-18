#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Player
{
	int Player_id;
	char Player_name[20];
	int runs;
	int wickets_taken;
	int innings_played;
	static int count;
public:
	Player();
	Player(const char*, int, int, int);
	Player(Player& p);
	void display();
};
int Player::count = 0;
Player::Player()
{
	count++;
	Player_id = count;
	strcpy(Player_name, "NA");
	runs = 0;
	wickets_taken = 0;
	innings_played = 0;
}
Player::Player(const char* n, int r, int w, int i)
{
	count++;
	Player_id = count;
	strcpy(Player_name, n);
	runs = r;
	wickets_taken = w;
	innings_played = i;
}
Player::Player(Player& p)
{
	count++;
	Player_id = count;
	strcpy(Player_name, p.Player_name);
	runs = p.runs;
	wickets_taken = p.wickets_taken;
	innings_played = p.innings_played;
}
void Player::display()
{
	cout << "Player Id is: " << Player_id << "\n" << "Player Name is: " << Player_name << "\n" 
		<< "Runs is: "<< runs << "\n" << "Wickets Taken is: " << wickets_taken << "\n" 
		<< "Innings Played is :"<< innings_played << endl;
}
int main()
{
	Player p1;
	p1.display();

	Player p2("Ajay",10,5,3);
	p2.display();

	Player p3("Pushpak", 15, 6, 4);
	p3.display();

	
	Player p4(p2);
	p4.display();


}