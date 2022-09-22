#include <iostream>
#include <string>
using namespace std;

class Player{
public:
	string nama;

//prototype

	Player(const char*);
	void Readd();
	void ubahName(const char*);
};

int main(){
	Player* ucup = new Player("ucup");
	ucup->Readd();
	ucup->ubahName("udin");
	ucup->Readd();

	return 0;
}

//penjabarannya

Player::Player(const char* nama){
	this->nama = nama;
}

void Player::Readd(){
	cout << this->nama << endl;
}
void Player::ubahName(const char* ubahNama){
	this->nama = ubahNama;
}