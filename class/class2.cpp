#include <iostream>
using namespace std;

class Data{
public:
	int angka;
	float nomor;

	Data(int angka, float nomor){
		this->angka = angka;
		this->nomor = nomor;
	}
	
};
int main(){
	Data* member = new Data(1, 4.345);
	cout << member->angka << endl;
	cout << member->nomor << endl;

	return 0;
}