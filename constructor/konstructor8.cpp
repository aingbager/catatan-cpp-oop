#include <iostream>
#include <string>

using namespace std;
class Mahasiswa{
public:
  string nama;
  int usia;

  Mahasiswa(string inputNama, int inputUsia){
    Mahasiswa::nama = inputNama;
    Mahasiswa::usia = inputUsia;

    cout << "namaku: " << nama << endl;
    cout << "usia ku: " << usia << endl;
  }
};
int main(){
  Mahasiswa udin = Mahasiswa("udin",22);
  Mahasiswa ucup = Mahasiswa("ucup", 24);
}
