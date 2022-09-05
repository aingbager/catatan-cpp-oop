#include <iostream>
#include <string>
using namespace std;

class Data{
public:
	string nama;
	string gender;
	int age;

	Data(string inputNama, string inputGender, int inputAge){
		Data::nama = inputNama;
		Data::gender = inputGender;
		Data::age = inputAge;

		cout << "nama saya: " << Data::nama << endl;
		cout << "gender saya: " << Data::gender << endl;
		cout << "umur saya: " << Data::age << endl;
	}

};

int main(){

	Data udin = Data("udin","laki-laki",25);
	Data dina = Data("dina","perempuan",23);

	return 0;

}

