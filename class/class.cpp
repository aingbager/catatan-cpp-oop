#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
	public:
		string nama;
};

int main(){
	//tidak boleh di gabung karna object
	// contoh salah Mahasiswa data1 data2;
	Mahasiswa data1; 
	data1.nama = "ucup";
	
	Mahasiswa data2;
	data2.nama = "udin";

	cout << "nama dari data1: " << data1.nama << endl;
	cout << "nama dari data2: " << data2.nama << endl;


	return 0;
}