#include <iostream>
#include <string>

using namespace std;

class Alam{
public:
	string cuaca;
	string awan;
	float jam;
};
int main(){

	Alam sekarang;
	sekarang.cuaca = "hujan";
	sekarang.awan = "hitam";
	sekarang.jam = 14.00;

	cout << sekarang.cuaca << endl;
	cout << sekarang.awan << endl;
	cout << sekarang.jam << endl;
	return 0;

}