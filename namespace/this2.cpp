#include <iostream>
#include <string>

using namespace std;

class Person{
public:
	string nama;
	string usia;

	Person(const char* inputNama , const char* inputUsia){
		this->nama = inputNama;
		this->usia = inputUsia;
	}
	void Tampilkan(){
		cout << this->nama << endl;
		cout << this->usia << endl;
	}
};
int main(){
	Person* jojo = new Person("jojo","22");
	jojo->Tampilkan();

	return 0;
}