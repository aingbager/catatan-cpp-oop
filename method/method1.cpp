#include <iostream>
#include <string>

using namespace std;
class Mahasiswa{
public:
	string nama;
	string jurusan;
	double ipk;

	Mahasiswa(string inputNama,string inputJurusan,double inputIpk){
		Mahasiswa::nama = inputNama;
		Mahasiswa::jurusan = inputJurusan;
		Mahasiswa::ipk = inputIpk;
	}

	void Tampilkan(){
		cout << "nama saya " << nama <<", jurusan " ;
		cout << jurusan << ",nilai saya " << ipk << endl;
	}
};
int main(){
	Mahasiswa mahasiswa1 = Mahasiswa("udin","memasak",2.5);
	Mahasiswa mahasiswa2 = Mahasiswa("kintil","akuntansi",4.5);
	mahasiswa1.Tampilkan();
	mahasiswa2.Tampilkan();
	return 0;
}