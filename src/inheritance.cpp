#include <cstdlib>
#include <iostream>
#include <string>
#include <map>
using namespace std;

class Category {

    private:
        string id;
        string displayName;

    public:
        Category() {}
        Category(string id, string displayName) {
            this->id = id;
            this->displayName = displayName;
        }

        string getId() {
            return this->id;
        }

        string getDisplayName() {
            return this->displayName;
        }

        void displayInfo() {
            cout << "[Category]" << endl;
            cout << "Id : " << id << endl;
            cout << "Display name : " << displayName << endl;
        }
};

class Animal {

    private:
        string id;
        string displayName;
        Category category;

    public:
        Animal(string id, string displayName, Category category) {
            this->id = id;
            this->displayName = displayName;
            this->category = category;
        }

        string getId() {
            return this->id;
        }

        string getDisplayName() {
            return this->displayName;
        }

        Category getCategory() {
            return this->category;
        }

        void displayInfo() {
            cout << "[Animal]" << endl;
            cout << "Id : " << id << endl;
            cout << "Display name : " << displayName << endl;
            category.displayInfo();
        }
};

int main() {

    Animal animals[] = {
        Animal("dog", "Dog", Category("mamal", "Mamal")),
        Animal("cat", "Cat", Category("mamal", "Mamal"))
    };

    map<string, Animal> animalMap;
    for(Animal entry : animals) {
        animalMap.insert({entry.getId(), entry});
    }

    for(const auto& pair : animalMap) {
        Animal animal = pair.second;
        animal.displayInfo();
    }

    Animal* ptr = animals;
    cout << "Address of animals array : " << &ptr << endl;
    free(ptr);

    cout << "Free'd animals array at " << &ptr << " !" << endl;

    return 0;
}
