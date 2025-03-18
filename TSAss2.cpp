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
	void accept();
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
void Player::accept()
{
	cout << "Enter the Player Information";
	cout << "Player ID is: " <<Player_id <<endl;
	cout << "Enter Player Name" << endl;
	cin >> Player_name;
	cout << "Enter Runs" << endl;
	cin >> runs;
	cout << "Enter Wickets Taken" << endl;
	cin >> wickets_taken;
	cout << "Enter Innings of Player" << endl;
	cin >> innings_played;
}
void Player::display()
{
	cout << "Player Id is: " << Player_id << "\n" << "Player Name is: " << Player_name << "\n"
		<< "Runs is: " << runs << "\n" << "Wickets Taken is: " << wickets_taken << "\n"
		<< "Innings Played is :" << innings_played << endl;
}
int main()
{

	Player p1[10];
	for (int i = 0; i < 10; i++)
	{
		p1[i].accept();
	}
	for (int i = 0; i < 10; i++)
	{
		p1[i].display();
	}



}