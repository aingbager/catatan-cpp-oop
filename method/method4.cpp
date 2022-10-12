#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
public:
	string nama;
	int usia;

	Mahasiswa(const char* nama, int usia){
		Mahasiswa::nama = nama;
		this->usia = usia;
	}
	void Tampilkan(){
		cout << this->nama << endl;
		cout << this->usia << endl;
	}
	void ubahNama(const char* ubahNama){
		this->nama = ubahNama;
	}
};
int main(){

	Mahasiswa* udin = new Mahasiswa("udin",22);
	udin->Tampilkan();
	udin->ubahNama("ucup");
	udin->Tampilkan();

	return 0;
}