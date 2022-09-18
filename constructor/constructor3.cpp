#include <string>
#include <iostream>
using namespace std;

class Laptop{
public:
	string nama;
	string merek;

	Laptop(const char* namaInput, const char* merekInput){
		Laptop::nama = namaInput;
		Laptop::merek = merekInput;
	}
	void tampil(){
		cout << "nama: " <<Laptop::nama << " punya laptop: ";
		cout << Laptop::merek << endl;
	}
};
int main(){
	Laptop andi = Laptop("andi","lenovo");
	andi.tampil();

	return 0;
}