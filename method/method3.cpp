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
	}
	void tampilkanDataMahasiswa(){
			cout << "nama: " << nama << endl;
			cout <<"alamat: " << alamat << endl;
			cout << "jurusan: " << jurusan << endl;
			cout << "usia: " << usia << endl;
		}
	void ubahNama(string ubahNama){
		Mahasiswa::nama = ubahNama;
	}
};
int main(){

	Mahasiswa udin = Mahasiswa("udin","ciantra","kimia",24);
	udin.tampilkanDataMahasiswa();
	Mahasiswa ucup = Mahasiswa("ucup","kukun","memaasak",26);
	ucup.tampilkanDataMahasiswa();
	ucup.ubahNama("ucup ganteng");
	ucup.tampilkanDataMahasiswa();

	return 0;

}