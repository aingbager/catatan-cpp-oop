#include <iostream>
#include <string>

using namespace std;

class dataClass{
public:
	string nama;
	string index;

	dataClass(const char* inputNama, const char* inputIndex){
		//dengan menggunakan namespace dari class
		dataClass::nama = inputNama;

		//dengan menggunakan this
		this-> index = inputIndex;
	}
};
int main(){

	dataClass* data1 = new dataClass("anjay","ucup");
	cout << data1->index << endl;

	return 0;

}