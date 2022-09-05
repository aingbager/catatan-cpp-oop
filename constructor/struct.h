//constructor

class Toko{
public:
	std::string nama;
	std::string toko;
	std::string menjual;

	Toko(std::string inputNama,std::string inputToko,std::string inputMenjual){
		Toko::nama = inputNama;
		Toko::toko = inputToko;
		Toko::menjual = inputMenjual;

		std::cout << Toko::nama << std::endl;
		std::cout << Toko::toko << std::endl;
		std::cout << Toko::menjual <<std::endl;
	}
};