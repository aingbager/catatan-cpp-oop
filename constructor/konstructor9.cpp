#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
public:
	string nama;
	int usia;

	Mahasiswa(string inputNama, int inputUsia){
		Mahasiswa::nama = inputNama;
		Mahasiswa::usia = inputUsia;

		cout << "namaku " << nama << endl;
		cout << "usiaku " << usia << endl;
	}
};
int main(int argc, char const *argv[])
{
	Mahasiswa udin = Mahasiswa("udin",24);
	Mahasiswa ucup = Mahasiswa("ucup",55);
	return 0;
}