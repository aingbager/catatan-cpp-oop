#include <iostream>
#include <string>
using namespace std;


class Mahasiswa{
public:
	string nama;
	string usia;
	string jurusan;

	Mahasiswa(string inputNama,string inputUsia,string inputJurusan){
		Mahasiswa::nama = inputNama;
		Mahasiswa::usia = inputUsia;
		Mahasiswa::jurusan = inputJurusan;

		cout << Mahasiswa::nama << endl;
		cout << Mahasiswa::usia << endl;
		cout << Mahasiswa::jurusan << endl;
	}
};

int main(){
	Mahasiswa user1 = Mahasiswa("udin","21 tahun", "memancing");
	Mahasiswa user2 = Mahasiswa("michael","26 tahun", "b.inggris");

	return 0;
}