#include <iostream>
using namespace std;

class Mahasiswa{
public:
	int angka;
	double angka1;

	Mahasiswa(int inputAngka,int inputAngka1){
		this->angka = inputAngka;
		this->angka1 = inputAngka1;
	}
};
int main(){
	Mahasiswa* murid1 = new Mahasiswa(4,5);
	cout << murid1-> angka << endl;
	cout << murid1-> angka1 << endl;

	return 0;
}