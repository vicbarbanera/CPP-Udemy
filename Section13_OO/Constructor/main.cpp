#include <iostream>

class Player {

private:
  // Attributes:
  std::string name;
  int health;
  int xp;

public:
  // Constructor:
  Player(std::string input_name, int input_health, int input_xp) {
    name = input_name;
    health = input_health;
    xp = input_xp;
  }

  ~Player() {
    std::cout << "Player: " << name << " foi destruido." << std::endl;
  }

  // Methods:
  void set_name(std::string new_name) { name = new_name; }

  std::string get_name() { return name; }

  void set_health(int new_health) {
    if (new_health > -1 && new_health < 101) {
      health = new_health;
    } else {
      health = 0;
    }
  }

  int get_health() { return health; }

  void set_xp(int new_xp) {
    if (new_xp > 0) {
      xp = new_xp;
    } else {
      xp = 0;
    }
  }

  int get_xp() { return xp; }
};

int main() {

  Player p1("Pics", 100, 0);

  p1.set_name("Pics");
  p1.set_health(100);
  p1.set_xp(0);

  std::cout << "Player name: " << p1.get_name() << std::endl;
  std::cout << "Player health: " << p1.get_health() << std::endl;
  std::cout << "Player xp: " << p1.get_xp() << std::endl;

  return 0;
}