#include <iostream>
using namespace std;

class classType{
public:
	string dataStr;
	double dataDouble;
	double m_dataDouble;

	classType(const char* dataStr,double dataDouble){
		//dengan menggunakan namespace dari class
		classType::dataStr = dataStr;

		//dengan menggunakan "this"
		this->dataDouble = dataDouble;

		//dengan menggunakan konvensi penamaan
		m_dataDouble = dataDouble;
	}
};
int main(){
	classType* object1 = new classType("object1", 0.05);
	cout << object1->dataDouble << endl;
	cout << object1->m_dataDouble << endl;

	return 0;

}