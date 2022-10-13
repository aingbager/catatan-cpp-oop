#include <iostream>
#include <string>

using namespace std;
class Orang{
public:
	string nama;
	string favorit;

	Orang(const char* , const char*);
	void Tampilkan();
};

int main(){
	Orang* ucup = new Orang("ucup","makan");
	ucup->Tampilkan();
}

//penjabaran
Orang::Orang(const char* nama, const char* favorit){
		this->nama = nama;
		this->favorit = favorit;
}

void Orang::Tampilkan(){
	cout << this->nama << endl;
	cout << this->favorit << endl;
}