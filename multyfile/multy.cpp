#include <iostream>
#include <string>

//include header external
#include "headerr.hpp"

using namespace std;



int main(){
	Player* ucup = new Player("ucup");
	ucup->Readd();
	ucup->ubahName("udin");
	ucup->Readd();

	return 0;
}

