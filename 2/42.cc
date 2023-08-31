#include <iostream>
using namespace std;

//parent class
class Base {
  private:
    int pvt = 1;

    
  protected:
    int prot = 2;

  public:
    int pub = 3;

    // sad je on p
    int getPVT() {
      return pvt;
    }
    
    int getPVT2() {
      return prot;
    }
};

class PublicDerived : public Base {

  public:
    // function to access protected member from Base
    int getProt() {
      return prot;
    }
};

int main() {
  PublicDerived object1;
  cout << "Private = " << object1.getPVT() << endl;
  cout << "Protected = " << object1.getProt() << endl;
  cout << "Public = " << object1.pub << endl;
  return 0;
}
