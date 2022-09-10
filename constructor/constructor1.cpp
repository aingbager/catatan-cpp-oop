#include <iostream>
using namespace std;

class Mahasiswa{
public:
	string nama;
	string usia;

	Mahasiswa(string inputNama, string inputUsia){
		Mahasiswa::nama = inputNama;
		Mahasiswa::usia = inputUsia;

		cout << Mahasiswa::nama << endl;
		cout << Mahasiswa::usia << endl;
	}
};
int main(){
	Mahasiswa file1 = Mahasiswa("udin","21");
	Mahasiswa file2 = Mahasiswa("ucup","25");
	 return 0;
}