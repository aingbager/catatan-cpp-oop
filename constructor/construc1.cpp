#include <iostream>
#include<string>

using namespace std;

class Mahasiswa{
public:
	string nama;
	int usia;
	string jurusan;

	Mahasiswa(string inputNama,int inputUsia,string inputJurusan){
		Mahasiswa::nama = inputNama;
		Mahasiswa::usia = inputUsia;
		Mahasiswa::jurusan = inputJurusan;

		cout << Mahasiswa::nama << endl;
		cout << Mahasiswa::usia << endl;
		cout << Mahasiswa::jurusan << endl;
	}
};

int main(int argc, char const *argv[])
{
	Mahasiswa member1 = Mahasiswa("udin",23,"memasak");
	Mahasiswa member2 = Mahasiswa("ucup",25,"matematika");

	return 0;
}