#include <iostream>;
using namespace std;

class Entity {
  public:
    string name;
    int strength;
    int dex;
    int stamina;

    // Placeholder values
    Entity(string suppliedName) {
      name = suppliedName;
      strength = 10;
      dex = 10;
      stamina = 10;
    }
};

int main(){
  return 0;
}