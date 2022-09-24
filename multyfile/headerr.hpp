#ifndef __HEADERR
#define __HEADERR
#include <string>


class Player{
public:
	std::string nama;

//prototype

	Player(const char*);
	void Readd();
	void ubahName(const char*);
};

#endif