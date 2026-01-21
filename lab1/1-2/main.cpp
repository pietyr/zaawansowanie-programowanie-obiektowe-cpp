//
// Created by pietyr on 21.01.2026.
//

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include <iostream>

using namespace std;

int main() {
    Animal **animals = new Animal *[5];
    Cat **cats = new Cat *[3];
    Dog **dogs = new Dog *[2];

    animals[0] = new Cat("Murka");
    animals[1] = new Animal(4, "Słoń", true);
    animals[2] = new Dog("Azor", "Owczarek niemiecki", 4, 5);
    animals[3] = new Cat("Kot");
    animals[4] = new Dog("Diego");

    for (int i = 0; i < 5; i++) {
        animals[i]->info();
    }

    return 0;
}

int howManyProtectedAnimals(const Animal *animals, const int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (animals[i].isProtectedAnimal()) {
            count++;
        }
    }
    return count;
}

int howManyTrackerDogs(const Dog *dogs, const int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (dogs[i].getSkillLevel(2) == 2) {
            count++;
        }
    }
    return count;
}

void howManyCats(const Cat *cats, const int size) {
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < 5; j++) {
            count += cats[i].getMice(j);
        }
        cout << "Cat " << i + 1 << ", number of hunted mices:  " << count << endl;
    }
}
