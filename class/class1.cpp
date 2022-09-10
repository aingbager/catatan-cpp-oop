#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
public:
	string name;
	string gender;
	int usia;
};

int main(){
	Mahasiswa udin;
	udin.name = "udin";
	udin.gender = "pria";
	udin.usia = 32;

	cout << udin.name << endl;
	cout << udin.gender << endl;
	cout << udin.usia << endl;

	Mahasiswa ucup;
	ucup.name = "ucup";
	ucup.gender = "pria";
	ucup.usia = 25;

	cout << ucup.name << endl;
	cout << ucup.gender << endl;
	cout << ucup.usia << endl;
}