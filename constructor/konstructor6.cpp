#include <iostream>
#include <string>

using namespace std;
class Mahasiswa{
public:
	string nama;
	string alamat;
	string jurusan;
	int usia;

	Mahasiswa(string inputNama, string inputAlamat,string inputJurusan,int inputUsia){
		Mahasiswa::nama = inputNama;
		Mahasiswa::alamat = inputAlamat;
		Mahasiswa::jurusan = inputJurusan;
		Mahasiswa::usia = inputUsia;

		cout << "nama: " << nama << endl;
		cout <<"alamat: " << alamat << endl;
		cout << "jurusan: " << jurusan << endl;
		cout << "usia: " << usia << endl;
	}
};
int main(){

	Mahasiswa udin = Mahasiswa("udin","ciantra","kimia",24);
	Mahasiswa ucup = Mahasiswa("ucup","kukun","memaasak",26);

	return 0;

}