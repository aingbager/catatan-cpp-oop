#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
public:
  string nama;
  int umur;

  Mahasiswa(string inputNama,int inputUmur){
    Mahasiswa::nama = inputNama;
    Mahasiswa::umur = inputUmur;

    cout << "nama saya " << Mahasiswa::nama << " umur saya ";
    cout << Mahasiswa::umur << endl;
  }
};
int main(){
  Mahasiswa doni = Mahasiswa("doni", 24);
  Mahasiswa jaka = Mahasiswa("jaka",22);
}
