#include <iostream>
#include <string>

using namespace std;

class Belanja{
public:
	string buah;
	string sayur;
	string nama;
	Belanja(string inputBuah, string inputSayur, string inputNama){
		Belanja::buah = inputBuah;
		Belanja::sayur = inputSayur;
		Belanja::nama = inputNama;
	}
};

int main(int argc, char const *argv[])
{
	Belanja udin = Belanja("apel","bayam","udin");
	cout << udin.nama << endl;
	cout << udin.sayur << endl;
	cout << udin.buah << endl;
	return 0;
}