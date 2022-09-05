#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
public:
	string nama;
	string gender;
	int usia;

	Mahasiswa(string inputNama, string inputGender, int inputUsia){
		Mahasiswa::nama = inputNama;
		Mahasiswa::gender = inputGender;
		Mahasiswa::usia = inputUsia;
	}
	//method tanpa parameter dan tanpa return
	void TampilkanData(){
			cout << "nama saya " << nama << endl;
			cout << "jenis kelamin " << gender << endl;
			cout << "umur saya " << usia << endl << endl;
		}
	void ubahNama(string namaBaru){
		Mahasiswa::nama = namaBaru;
	}
};
int main(){
	Mahasiswa udin = Mahasiswa("udin","laki-laki",25);
	udin.TampilkanData();
	Mahasiswa jeje = Mahasiswa("jeje","perempuan",22);
	jeje.TampilkanData();
	udin.ubahNama("michael");
	udin.TampilkanData()

	return 0;
}