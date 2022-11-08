#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
public:
  string nama;
  int usia;

  Mahasiswa(string inputNama,int inputUsia){
    Mahasiswa::nama = inputNama;
    Mahasiswa::usia = inputUsia;

  }
  void Tampilkan(){
    cout << "nama saya: " << Mahasiswa::nama << endl;
    cout << "usia saya: " << Mahasiswa::usia << endl;
  }
};

int main(){
  Mahasiswa udin = Mahasiswa("udin", 24);
  udin.Tampilkan();

  return 0;
}
