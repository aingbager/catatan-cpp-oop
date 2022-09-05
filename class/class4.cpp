#include <iostream>
#include <string>
using namespace std;

class Rokok{
public:
	string merek;
	string isi;
};


int main(int argc, char const *argv[])
{
	Rokok super;
	super.merek = "rokok super";
	super.isi = "12 batang";

	cout << super.merek << endl;
	cout << super.isi << endl;

	cout << endl;

	Rokok filter;
	filter.merek = "rokok filter";
	filter.isi = "12 batang";

	cout << filter.merek << endl;
	cout << filter.isi << endl;
	return 0;
}