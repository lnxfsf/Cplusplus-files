#include <iostream>
using namespace std;

class Base {
  private:
    int pvt = 1;

  protected:
    int prot = 2;

  public:
    int pub = 3;

    // sad je on protected
    int getPVT() {
      return pvt;
    }
    
   
};

class PublicDerived : protected Base {
  public:
    // function to access protected member from Base, on moze...
    int getProt() {
      return prot;
    }
    // function to access public member from Base
    int getPub() {
      return pub;
    }
    
    
};

int main() {
  PublicDerived object1;
  cout << "Protected = " << object1.getProt() << endl; //ovaj moze jer je ova funkcija deklarisana kao public, u ovoj klasi za koji je objekat i kreiran
   cout << "Public = " << object1.getPub() << endl;
   

   
  
  
  
  return 0;
}