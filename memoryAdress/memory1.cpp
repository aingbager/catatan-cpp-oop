#include <iostream>
using namespace std;

class kosong{
public:
};

class Isi{
public:
	int isi; //4byte
	int isi2;//4byte
	double isi3;//8byte
};

class Mahasiswa{
	
};

int main(){
	cout << "alokasi class kosong: " << sizeof(kosong);
	cout << " byte" << endl;

	cout << "alokasi class isi: " << sizeof(Isi);
	cout << " byte" << endl;
	return 0;
}