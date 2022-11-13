#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
  public:
    string nama;
    int usia;
      
      Mahasiswa(const char* nama,int usia){
      this->nama = nama;
      this->usia = usia;
      }

      void Tampil(){
      cout << this->nama << endl;
      cout << this->usia << endl;
      }

};
int main(){
  Mahasiswa* anan = new Mahasiswa("anan",22);
  anan->Tampil();
}
