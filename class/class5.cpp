#include <iostream>
#include <string>
using namespace std;

class Hiburan{
public:
	string hajatan;
	string tanggapan;
	double jam;


};
int main(){

	Hiburan andi;
	andi.hajatan = "andi";
	andi.tanggapan = "organ";
	andi.jam = 17.30;

	cout << andi.hajatan << endl;
	cout << andi.tanggapan << endl;
	cout << andi.jam << endl;

	return 0;
}