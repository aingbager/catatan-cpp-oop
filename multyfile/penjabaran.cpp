#include "headerr.hpp"
#include <iostream>
//penjabarannya

Player::Player(const char* nama){
	this->nama = nama;
}

void Player::Readd(){
	std::cout << this->nama << std::endl;
}
void Player::ubahName(const char* ubahNama){
	this->nama = ubahNama;
}