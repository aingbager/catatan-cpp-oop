#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
public:
	string nama;
	string hoby;
	int usia;

	Mahasiswa(string inputNama, string inputHoby, int inputUsia){
		Mahasiswa::nama = inputNama;
		Mahasiswa::hoby = inputHoby;
		Mahasiswa::usia = inputUsia;

		cout << Mahasiswa::nama << endl;
		cout << Mahasiswa::hoby << endl;
		cout << Mahasiswa::usia << endl;
	}
};

int main(){

	Mahasiswa udin = Mahasiswa("udin", "makan", 24);

	return 0;
}