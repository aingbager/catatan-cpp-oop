#include <iostream>

using namespace std;

class Data{
public:
	string makanan;
	string minuman;
	string nama;
	short age;
};
int main(){

	Data orang1;
	orang1.makanan = "bakso";
	orang1.minuman = "es teh";
	orang1.nama = "ucup";
	orang1.age = 24;

	cout << orang1.makanan << endl;
	cout << orang1.minuman << endl;
	cout << orang1.nama << endl;
	cout << orang1.age << endl;

	return 0;


}