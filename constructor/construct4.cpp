#include <iostream>
#include <string>

using namespace std;

class Makanan{
public:
	string kue;
	string orang;

	Makanan(string inputkue,string inputorang){
		kue = inputkue;
		orang = inputorang;

		cout << kue << endl;
		cout << orang << endl;
	}
};

int main(){
	Makanan andi = Makanan("bolu","andi");
	Makanan udin = Makanan("rangi","udin");

	return 0;
}