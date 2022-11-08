#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
  public:
    string nama;
    string jurusan;
    double ipk;

    Mahasiswa(string inputNama,string inputJurusan,double inputIpk){
      Mahasiswa::nama = inputNama;
      Mahasiswa::jurusan = inputJurusan;
      Mahasiswa::ipk = inputIpk;
    }

    void Tampilkan(){
      cout << "nama saya " <<Mahasiswa::nama << endl;
      cout << "jurusan saya " << Mahasiswa::jurusan << endl;
      cout << "nilai saya " << Mahasiswa::ipk << endl;
    }

    void Ubah(string ubahNama){
      Mahasiswa::nama = ubahNama;
    }
};
int main(){
  Mahasiswa udin = Mahasiswa("udin","matematika",2.5);
  udin.Tampilkan();
  udin.Ubah("ucup");
  udin.Tampilkan();
  
  return 0;

}






