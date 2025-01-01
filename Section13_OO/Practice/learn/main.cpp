#include <iostream>
#include <string>

class Player {
public:
  std::string name;
  int health;
  int xp;

  void talk(std::string t) { std::cout << name << " says " << t << std::endl; }
};

int main() {

  Player p;
  p.name = "Piclis";
  p.health = 100;
  p.xp = 0;

  std::cout << "Player name is " << p.name << ", healh = " << p.health
            << " and xp = " << p.xp << std::endl;

  Player *player_2 = new Player;
  player_2->name = "Filis";
  player_2->health = 100;
  player_2->xp = 20;

  std::cout << "Player 2 name is " << player_2->name
            << ", health = " << player_2->health << " and xp = " << player_2->xp
            << std::endl;

  player_2->talk("Test");

  delete player_2;

  return 0;
}