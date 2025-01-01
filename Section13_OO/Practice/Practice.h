
#ifndef __PRACTICE_H__
#define __PRACTICE_H__

#include <iostream>
#include <string>

class Animal {
private:
  std::string name;

public:
  // esse e' o construtor principal
  Animal(std::string name) : name{name} {
    std::cout << "Construtor Animal recebendo nome " << name << " foi chamado."
              << std::endl;
  }

  // esse e' o construtor de copia
  Animal(const Animal &original) : name("Copia " + original.name) {
    std::cout << "Copy constructor sendo usado para " << original.name
              << std::endl;
  }

  // esse e' o destrutor
  ~Animal() {
    std::cout << "Destrutor Animal foi chamado para " << name << std::endl;
  };

  std::string get_name() { return name; }
  void speak();
};

class Gato {
private:
  std::string name;
  int age;
  std::string tipo;

public:
  Gato(std::string name, int age, std::string tipo)
      : name{name}, age{age}, tipo{tipo} {
    std::cout << "Usando construtor principal de Gato para " << name << " de "
              << age << " anos e do tipo " << tipo << std::endl;
  }

  Gato(const Gato &original, std::string name, int age)
      : name{name}, age{age}, tipo{original.tipo} {
    std::cout << "Usando construtor copia para " << name << " de " << age
              << " anos e do tipo " << tipo << std::endl;
  }

  Gato(const Gato &original, std::string name)
      : name{name}, age{original.age}, tipo{original.tipo} {
    std::cout << "Usando construtor copia para " << name << " de " << age
              << " anos e do tipo " << tipo << std::endl;
  }

  Gato(const Gato &original, int age)
      : name{original.name}, age{age}, tipo{original.tipo} {
    std::cout << "Usando construtor copia para " << name << " de " << age
              << " anos e do tipo " << tipo << std::endl;
  }

  ~Gato() { std::cout << "Estamos destruindo o Gato " << name << std::endl; }

  std::string get_name() { return name; }
  int get_age() { return age; }
  std::string get_tipo() { return tipo; }
};

#endif
