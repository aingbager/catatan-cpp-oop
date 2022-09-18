#include <iostream>
#include <string>

using namespace std;

class Player{
	string nama;
	string jurus;

	Player(const char* nama){
		this->nama = nama;
	}
};

string Player::Player(const char* nama);
int main(){
	Player* ucup = new Player();
}