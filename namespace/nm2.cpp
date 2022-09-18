#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
public:
	string nama;
	int umur;

	Mahasiswa(string inputNama, int inputUmur){
		this-> nama = inputNama;
		this-> umur = inputUmur;
	}
	void tampilkan(){
		cout << nama << endl;
		cout << umur << endl;

	}
};
int main(){
	Mahasiswa* ucup = new Mahasiswa("ucup",32);
	ucup->tampilkan();

	return 0;
}