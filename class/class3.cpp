#include <string>
#include <iostream>

using namespace std;

class Mahasiswa{
public:
	string nama;
	int usia;
	string jurusan;
};

int main(){

	//data member
	Mahasiswa member1;
	member1.nama = "udin";
	member1.usia = 23;
	member1.jurusan = "importmatika";

	cout << "member1.nama: " << member1.nama << endl;
	cout << "member1.usia: " << member1.usia << endl;
	cout << "member1.jurusan: " << member1.jurusan << endl;

	return 0;
}