#include <iostream>
#include <string>

using namespace std;
class Mahasiswa{
public:
	string nama;
	string hoby;
	int usia;
};

int main(){
	Mahasiswa dodo;
	dodo.nama = "dodo";
	dodo.hoby = "makan";
	dodo.usia = 32;

	cout << dodo.nama << endl;
	cout << dodo.hoby << endl;
	cout << dodo.usia << endl;

	return 0;
}