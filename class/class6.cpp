#include <iostream>
#include <string>

using namespace std;

class Makanan{
  public:
  string hoby;
  string nama;
};
int main(){
  Makanan udin;
  udin.hoby = "makan";
  udin.nama = "udin";
  
  cout << udin.hoby << endl;
  cout << udin.nama << endl;
  
  return 0;
}
