#include <iostream>
#include <string>
using namespace std;

class Pedagang{
public:
	string nama;
	string penjual;
	int usia;
};
int main(int argc, char const *argv[])
{
	Pedagang data1;
	data1.nama = "udin";
	data1.penjual = "bakso";
	data1.usia = 35;

	Pedagang data2;
	data2.nama = "ucup";
	data2.penjual = "mie ayam";
	data2.usia = 18;

	cout << "data1.nama adalah: " << data1.nama << endl;
	cout << "data2.nama adalah: " << data2.nama << endl; 
	return 0;
}